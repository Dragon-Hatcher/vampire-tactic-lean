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
# Nothing links against the worker or loads it, so it exports nothing. A C++
# executable otherwise exports its thousands of weak definitions, and dyld
# looks each one up in the export trie on every launch: that was more than
# half of the worker's start-up, about 4ms of 7ms on an M-series Mac. On Linux
# an executable exports nothing unless asked to.
if(APPLE)
  target_link_options(vampire-worker PRIVATE "LINKER:-no_exported_symbols")
endif()
# Link-time optimization, where the compiler has it: vampire's hot paths call
# small functions defined in other files (ordering, substitution, the beat
# counter), which only the linker can inline. About 4% off a search, the same
# search, and nothing off what it finds.
include(CheckIPOSupported)
check_ipo_supported(RESULT VAMPIRE_IPO OUTPUT VAMPIRE_IPO_WHY LANGUAGES CXX)
if(VAMPIRE_IPO AND CMAKE_BUILD_TYPE STREQUAL "Release")
  set_target_properties(common vampire-worker PROPERTIES
    INTERPROCEDURAL_OPTIMIZATION ON)
endif()
