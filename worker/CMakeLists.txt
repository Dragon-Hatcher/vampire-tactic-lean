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
# of the enum the way `scripts/gen-inference-rules.py` reads it.
file(READ ${VAMPIRE_SOURCE_DIR}/Kernel/Inference.hpp INFERENCE_HPP)
string(REGEX MATCH "enum class InferenceRule : unsigned char \\{[^}]*\n\\};"
  RULE_ENUM "${INFERENCE_HPP}")
if(NOT RULE_ENUM)
  message(FATAL_ERROR "could not find InferenceRule in Kernel/Inference.hpp")
endif()
string(REGEX MATCHALL "\n[ \t]*[A-Z][A-Z_0-9]*[ \t]*," RULE_LINES "${RULE_ENUM}")
set(RULE_NAMES "")
foreach(line IN LISTS RULE_LINES)
  string(REGEX REPLACE "[\n \t,]" "" name "${line}")
  list(APPEND RULE_NAMES ${name})
endforeach()
string(JOIN "," RULE_NAMES_JOINED ${RULE_NAMES})
string(SHA256 RULE_HASH "${RULE_NAMES_JOINED}")
string(SUBSTRING ${RULE_HASH} 0 8 RULE_FINGERPRINT)
target_compile_definitions(vampire-worker PRIVATE
  VAMPIRE_RULE_FINGERPRINT=0x${RULE_FINGERPRINT}u)
