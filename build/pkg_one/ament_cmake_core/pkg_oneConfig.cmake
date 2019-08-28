# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_pkg_one_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED pkg_one_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(pkg_one_FOUND FALSE)
  elseif(NOT pkg_one_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(pkg_one_FOUND FALSE)
  endif()
  return()
endif()
set(_pkg_one_CONFIG_INCLUDED TRUE)

# output package information
if(NOT pkg_one_FIND_QUIETLY)
  message(STATUS "Found pkg_one: 0.0.0 (${pkg_one_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'pkg_one' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(pkg_one_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "rosidl_cmake-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${pkg_one_DIR}/${_extra}")
endforeach()
