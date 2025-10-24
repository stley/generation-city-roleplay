cmake_minimum_required(VERSION 3.20)
project(Generation-City NONE)


# Find pawncc on PATH
find_program(PAWNCC NAMES pawncc pawncc.exe)

# Common flags (tweak as needed)
set(PAWN_FLAGS
  "-d3"
  "-\;+" "-\(+"
  "-Z+"
  "-i${CMAKE_SOURCE_DIR}/include"
  "-i${CMAKE_SOURCE_DIR}/src/main_scripts/modules"
  "-i${CMAKE_SOURCE_DIR}/src/side_scripts/modules"
)

# Output directories
set(OUTPUT_DIR        "${CMAKE_BINARY_DIR}/amx")
set(MAIN_OUT_DIR      "${OUTPUT_DIR}/main_scripts")
set(SIDE_OUT_DIR      "${OUTPUT_DIR}/side_scripts")
file(MAKE_DIRECTORY "${MAIN_OUT_DIR}" "${SIDE_OUT_DIR}")




# Helper: compile one Pawn file
#   pawn_compile(<out_list_var> <MAIN|SIDE> <source.pwn> [EXTRA_DEFINES ...])
function(pawn_compile OUTLIST TYPE SRC)
  get_filename_component(_name "${SRC}" NAME_WE)

  if(TYPE STREQUAL "MAIN")
    set(_out "${MAIN_OUT_DIR}/${_name}.amx")
    set(_defines -Dmain_scripts)
  elseif(TYPE STREQUAL "SIDE")
    set(_out "${SIDE_OUT_DIR}/${_name}.amx")
    set(_defines -Dside_scripts)
  else()
    message(FATAL_ERROR "Unknown TYPE='${TYPE}' (use MAIN or SIDE)")
  endif()

  set(options)
  set(oneValueArgs)
  set(multiValueArgs EXTRA_DEFINES)
  cmake_parse_arguments(PAWN "${options}" "${oneValueArgs}" "${multiValueArgs}" ${ARGN})

  add_custom_target(${_name}_amx ALL
  COMMAND "${PAWNCC}" "${SRC}" ${PAWN_FLAGS} ${_defines} ${PAWN_EXTRA_DEFINES} "-o${_out}"
  WORKING_DIRECTORY "${CMAKE_SOURCE_DIR}"
  COMMENT "Rebuilding Pawn: ${SRC} -> ${_out}"
  VERBATIM
)
set(${OUTLIST} ${${OUTLIST}} ${_name}_amx PARENT_SCOPE)
endfunction()

# Source layout (adjust globs if you use something else)
file(GLOB_RECURSE MAIN_SOURCES CONFIGURE_DEPENDS
  "${CMAKE_SOURCE_DIR}/src/main_scripts/*.pwn"
)
file(GLOB_RECURSE SIDE_SOURCES CONFIGURE_DEPENDS
  "${CMAKE_SOURCE_DIR}/src/side_scripts/*.pwn"
)

# Fallback: single main at src/main.pwn (optional)
if(NOT MAIN_SOURCES AND EXISTS "${CMAKE_SOURCE_DIR}/src/main.pwn")
  list(APPEND MAIN_SOURCES "${CMAKE_SOURCE_DIR}/src/main.pwn")
endif()

# Build steps per file
set(MAIN_OUTPUTS)
foreach(src ${MAIN_SOURCES})
  pawn_compile(MAIN_OUTPUTS MAIN "${src}")
endforeach()

set(SIDE_OUTPUTS)
foreach(src ${SIDE_SOURCES})
  pawn_compile(SIDE_OUTPUTS SIDE "${src}")
endforeach()

# Phony targets
if(MAIN_OUTPUTS)
  add_custom_target(main_scripts ALL DEPENDS ${MAIN_OUTPUTS})
else()
  add_custom_target(main_scripts COMMENT "No main scripts in src/main_scripts or src/main.pwn")
endif()

if(SIDE_OUTPUTS)
  add_custom_target(side_scripts ALL DEPENDS ${SIDE_OUTPUTS})
else()
  add_custom_target(side_scripts COMMENT "No side scripts in src/side_scripts")
endif()

add_custom_target(all_scripts DEPENDS main_scripts side_scripts)

# Summary
message(STATUS "pawncc: ${PAWNCC}")
message(STATUS "Main scripts: ${MAIN_SOURCES}")
message(STATUS "Side scripts: ${SIDE_SOURCES}")
message(STATUS "Outputs -> ${OUTPUT_DIR}")