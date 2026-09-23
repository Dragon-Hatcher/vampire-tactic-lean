cmake_minimum_required(VERSION 3.14.0)
project(VampireWorker CXX)

if(NOT VAMPIRE_SOURCE_DIR)
  message(FATAL_ERROR "VAMPIRE_SOURCE_DIR is not set")
endif()

add_subdirectory(${VAMPIRE_SOURCE_DIR} vampire EXCLUDE_FROM_ALL)

get_property(VAMPIRE_INCLUDES
  DIRECTORY ${VAMPIRE_SOURCE_DIR} PROPERTY INCLUDE_DIRECTORIES)
get_property(VAMPIRE_DEFINITIONS
  DIRECTORY ${VAMPIRE_SOURCE_DIR} PROPERTY COMPILE_DEFINITIONS)
get_property(VAMPIRE_OPTIONS
  DIRECTORY ${VAMPIRE_SOURCE_DIR} PROPERTY COMPILE_OPTIONS)
get_target_property(VAMPIRE_CXX_STANDARD common CXX_STANDARD)

add_executable(vampire-worker
  ${CMAKE_CURRENT_SOURCE_DIR}/worker.cpp
  $<TARGET_OBJECTS:common>
)
set_target_properties(vampire-worker PROPERTIES
  CXX_STANDARD ${VAMPIRE_CXX_STANDARD}
  CXX_STANDARD_REQUIRED ON
  CXX_EXTENSIONS OFF
)
target_include_directories(vampire-worker PRIVATE ${VAMPIRE_INCLUDES})
target_compile_definitions(vampire-worker PRIVATE ${VAMPIRE_DEFINITIONS})
target_compile_options(vampire-worker PRIVATE ${VAMPIRE_OPTIONS})

# What the Lean side checks its generated `InferenceRule` against. The rules
# are numbered by where they are declared, so a count alone would not notice
# two of them trading places: this is a hash of their names in order, read out
# of the enum the way `scripts/gen-inference-rules.py` reads it. That is: the
# body runs from the declaration to the first line that starts with `};`, a
# rule is a line holding an upper-case name followed by a comma, and the enum
# must assign no explicit values and name no rule twice. The final enumerator,
# which has no comma, is the `GENERIC_THEORY_AXIOM_LAST` marker and is not a
# rule; the worker checks that its value is the count passed in here.
set(INFERENCE_HPP_PATH ${VAMPIRE_SOURCE_DIR}/Kernel/Inference.hpp)
set_property(DIRECTORY APPEND PROPERTY CMAKE_CONFIGURE_DEPENDS
  ${INFERENCE_HPP_PATH})
file(READ ${INFERENCE_HPP_PATH} INFERENCE_HPP)
set(RULE_ENUM_OPEN "enum class InferenceRule : unsigned char {")
string(FIND "${INFERENCE_HPP}" "${RULE_ENUM_OPEN}" RULE_ENUM_START)
if(RULE_ENUM_START EQUAL -1)
  message(FATAL_ERROR "could not find InferenceRule in ${INFERENCE_HPP_PATH}")
endif()
string(LENGTH "${RULE_ENUM_OPEN}" RULE_ENUM_OPEN_LENGTH)
math(EXPR RULE_ENUM_START "${RULE_ENUM_START} + ${RULE_ENUM_OPEN_LENGTH}")
string(SUBSTRING "${INFERENCE_HPP}" ${RULE_ENUM_START} -1 RULE_ENUM)
string(FIND "${RULE_ENUM}" "\n};" RULE_ENUM_END)
if(RULE_ENUM_END EQUAL -1)
  message(FATAL_ERROR "could not find InferenceRule in ${INFERENCE_HPP_PATH}")
endif()
string(SUBSTRING "${RULE_ENUM}" 0 ${RULE_ENUM_END} RULE_ENUM)
# Lines are matched with the newline before them, which stands in for the
# Python script's `^`; the body starts after the brace, so its first line has
# one too.
if(RULE_ENUM MATCHES "\n[ \t]*[A-Z][A-Z_0-9]*[ \t]*=")
  message(FATAL_ERROR "InferenceRule now assigns explicit values")
endif()
string(REGEX MATCHALL "\n[ \t]*[A-Z][A-Z_0-9]*[ \t]*," RULE_LINES
  "${RULE_ENUM}")
set(RULE_NAMES "")
foreach(line IN LISTS RULE_LINES)
  string(REGEX REPLACE "[\n \t,]" "" name "${line}")
  list(APPEND RULE_NAMES ${name})
endforeach()
list(LENGTH RULE_NAMES RULE_COUNT)
set(RULE_NAMES_UNIQUE ${RULE_NAMES})
list(REMOVE_DUPLICATES RULE_NAMES_UNIQUE)
list(LENGTH RULE_NAMES_UNIQUE RULE_UNIQUE_COUNT)
if(NOT RULE_COUNT EQUAL RULE_UNIQUE_COUNT)
  message(FATAL_ERROR "InferenceRule has duplicate names")
endif()
string(JOIN "," RULE_NAMES_JOINED ${RULE_NAMES})
string(SHA256 RULE_HASH "${RULE_NAMES_JOINED}")
string(SUBSTRING ${RULE_HASH} 0 8 RULE_FINGERPRINT)
target_compile_definitions(vampire-worker PRIVATE
  VAMPIRE_RULE_FINGERPRINT=0x${RULE_FINGERPRINT}u
  VAMPIRE_RULE_COUNT=${RULE_COUNT}u)
