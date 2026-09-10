cmake_minimum_required(VERSION 3.14.0)
project(VampireFFI CXX)

if(NOT VAMPIRE_SOURCE_DIR)
  message(FATAL_ERROR "VAMPIRE_SOURCE_DIR is not set")
endif()
if(NOT LEAN_INCLUDE_DIR)
  message(FATAL_ERROR "LEAN_INCLUDE_DIR is not set")
endif()

set(CMAKE_POSITION_INDEPENDENT_CODE ON)

add_subdirectory(${VAMPIRE_SOURCE_DIR} vampire EXCLUDE_FROM_ALL)

get_property(VAMPIRE_INCLUDES
  DIRECTORY ${VAMPIRE_SOURCE_DIR} PROPERTY INCLUDE_DIRECTORIES)
get_property(VAMPIRE_DEFINITIONS
  DIRECTORY ${VAMPIRE_SOURCE_DIR} PROPERTY COMPILE_DEFINITIONS)
get_property(VAMPIRE_OPTIONS
  DIRECTORY ${VAMPIRE_SOURCE_DIR} PROPERTY COMPILE_OPTIONS)
get_target_property(VAMPIRE_CXX_STANDARD common CXX_STANDARD)

add_library(vampire_shared SHARED
  ${CMAKE_CURRENT_SOURCE_DIR}/ffi.cpp
  $<TARGET_OBJECTS:common>
)
set_target_properties(vampire_shared PROPERTIES
  OUTPUT_NAME vampire
  CXX_STANDARD ${VAMPIRE_CXX_STANDARD}
  CXX_STANDARD_REQUIRED ON
  CXX_EXTENSIONS OFF
)
target_include_directories(vampire_shared
  PRIVATE ${VAMPIRE_INCLUDES} ${LEAN_INCLUDE_DIR})
target_compile_definitions(vampire_shared
  PRIVATE ${VAMPIRE_DEFINITIONS} LEAN_EXPORTING)
target_compile_options(vampire_shared
  PRIVATE ${VAMPIRE_OPTIONS} -fthreadsafe-statics)

# `libleanshared.so` statically embeds LLVM's libunwind and exports
# `_Unwind_RaiseException`. As a dependency of the `lean` executable it sits
# ahead of us in the global symbol scope, so libstdc++'s `__cxa_throw` would
# reach LLVM's unwinder and every throw out of vampire would hit
# `std::terminate`. Linking libstdc++/libgcc statically and localizing their
# symbols gives this library a private, non-interposable unwinder. Vampire
# reports a successful proof by throwing, so this is load-bearing.
target_link_options(vampire_shared PRIVATE
  -static-libstdc++
  -static-libgcc
  -Wl,--exclude-libs,libstdc++.a:libgcc.a:libgcc_eh.a
)
