# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_pkg_alpha_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED pkg_alpha_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(pkg_alpha_FOUND FALSE)
  elseif(NOT pkg_alpha_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(pkg_alpha_FOUND FALSE)
  endif()
  return()
endif()
set(_pkg_alpha_CONFIG_INCLUDED TRUE)

# output package information
if(NOT pkg_alpha_FIND_QUIETLY)
  message(STATUS "Found pkg_alpha: 0.0.0 (${pkg_alpha_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'pkg_alpha' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(pkg_alpha_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${pkg_alpha_DIR}/${_extra}")
endforeach()
