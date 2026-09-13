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
