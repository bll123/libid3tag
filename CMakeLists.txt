cmake_minimum_required(VERSION 3.5.0)
project(id3tag VERSION 0.16.4)

option(BUILD_SHARED_LIBS "Build dynamic library" ON)

# The new SOVERSION. This is 0.16.4 by default
# The general policy is that minor versions of the library (e.g., 0.16.1,
# 0.16.2) don't constitute an ABI breakage. Major versions (e.g., 0.17, 0.18)
# do constitute an ABI breakage.
set(LIBRARY_SOVERSION 0)

include(GNUInstallDirs)

include (CheckFunctionExists)
include (CheckIncludeFile)
include (CheckIncludeFileCXX)

add_compile_options (-g)

#
# Build
#

check_include_file(windows.h HAVE_WINDOWS_H)
check_function_exists (_wfopen HAVE_LIB__WFOPEN)

check_include_file(unistd.h HAVE_UNISTD_H)
check_include_file(assert.h HAVE_ASSERT_H)
check_function_exists(ftruncate HAVE_LIB_FTRUNCATE)

find_program (GPERF NAMES gperf)
find_program (SED NAMES sed)

if (NOT SED STREQUAL "")
  add_custom_command(
    OUTPUT ${PROJECT_SOURCE_DIR}/genre.dat
    COMMAND ${SED} -n
        -f ${PROJECT_SOURCE_DIR}/genre.dat.sed
        ${PROJECT_SOURCE_DIR}/genre.dat.in >
        ${PROJECT_SOURCE_DIR}/genre.dat
    MAIN_DEPENDENCY ${PROJECT_SOURCE_DIR}/genre.dat.in
    DEPENDS ${PROJECT_SOURCE_DIR}/genre.dat.sed
  )
endif()

if (NOT GPERF STREQUAL "")
  add_custom_command (
    OUTPUT ${PROJECT_SOURCE_DIR}/frametype.c
    COMMAND ${GPERF} -tCcTonD -K id -N id3_frametype_lookup -s -3 -k '*'
        ${PROJECT_SOURCE_DIR}/frametype.gperf
        --output-file=${PROJECT_SOURCE_DIR}/frametype.c
    MAIN_DEPENDENCY ${PROJECT_SOURCE_DIR}/frametype.gperf
  )

  add_custom_command (
    OUTPUT ${PROJECT_SOURCE_DIR}/compat.c
    COMMAND ${GPERF} -tCcTonD -K id -N id3_compat_lookup -s -3 -k '*'
        ${PROJECT_SOURCE_DIR}/compat.gperf
        --output-file=${PROJECT_SOURCE_DIR}/compat.c
    MAIN_DEPENDENCY ${PROJECT_SOURCE_DIR}/compat.gperf
  )
endif()

add_library(id3tag
    compat.c
    crc.c
    debug.c
    field.c
    file.c
    frame.c
    frametype.c
    genre.c
    # genre.dat must be added as a dependency otherwise the custom command
    # does not work
    genre.dat
    latin1.c
    parse.c
    render.c
    tag.c
    ucs4.c
    utf16.c
    utf8.c
    util.c
    version.c
)
target_include_directories(id3tag PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>
    $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
)
if(WIN32 AND BUILD_SHARED_LIBS)
    set_target_properties(id3tag PROPERTIES WINDOWS_EXPORT_ALL_SYMBOLS ON)
endif()

set_target_properties(id3tag PROPERTIES
  VERSION ${CMAKE_PROJECT_VERSION}
  SOVERSION ${LIBRARY_SOVERSION}
)

find_package(ZLIB REQUIRED)
target_link_libraries(id3tag PUBLIC ZLIB::ZLIB)

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/id3tag.h.in ${CMAKE_CURRENT_BINARY_DIR}/id3tag.h @ONLY)
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/config.h.in ${CMAKE_CURRENT_BINARY_DIR}/config.h @ONLY)

#
# Installation
#

include(CMakePackageConfigHelpers)

# Library files
install(TARGETS id3tag
  EXPORT id3tagTargets
  ARCHIVE DESTINATION "${CMAKE_INSTALL_LIBDIR}"
  LIBRARY DESTINATION "${CMAKE_INSTALL_LIBDIR}"
  RUNTIME DESTINATION "${CMAKE_INSTALL_BINDIR}"
  INCLUDES DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}"
)

# Header files
install(
  FILES "${CMAKE_CURRENT_BINARY_DIR}/id3tag.h"
  DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}"
)

# pkgconfig
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/packaging/id3tag.pc.in
  ${CMAKE_CURRENT_BINARY_DIR}/packaging/id3tag.pc @ONLY)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/packaging/id3tag.pc DESTINATION "${CMAKE_INSTALL_LIBDIR}/pkgconfig")

# CMake config
set(ID3TAG_INSTALL_CMAKEDIR "${CMAKE_INSTALL_LIBDIR}/cmake/id3tag")
install(
  EXPORT id3tagTargets
  FILE id3tagTargets.cmake
  NAMESPACE id3tag::
  DESTINATION "${ID3TAG_INSTALL_CMAKEDIR}"
)
configure_package_config_file(packaging/id3tagConfig.cmake.in
  "${CMAKE_CURRENT_BINARY_DIR}/packaging/id3tagConfig.cmake"
  INSTALL_DESTINATION "${ID3TAG_INSTALL_CMAKEDIR}"
)
write_basic_package_version_file(
  "${CMAKE_CURRENT_BINARY_DIR}/packaging/id3tagConfigVersion.cmake"
  VERSION "${CMAKE_PROJECT_VERSION}"
  COMPATIBILITY SameMajorVersion
)
install(
  FILES
    "${CMAKE_CURRENT_BINARY_DIR}/packaging/id3tagConfig.cmake"
    "${CMAKE_CURRENT_BINARY_DIR}/packaging/id3tagConfigVersion.cmake"
  DESTINATION "${ID3TAG_INSTALL_CMAKEDIR}"
)
