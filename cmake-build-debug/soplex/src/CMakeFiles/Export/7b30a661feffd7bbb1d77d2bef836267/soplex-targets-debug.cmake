#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "soplex" for configuration "Debug"
set_property(TARGET soplex APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(soplex PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/bin/soplex.exe"
  )

list(APPEND _cmake_import_check_targets soplex )
list(APPEND _cmake_import_check_files_for_soplex "${_IMPORT_PREFIX}/bin/soplex.exe" )

# Import target "libsoplex" for configuration "Debug"
set_property(TARGET libsoplex APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(libsoplex PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "CXX"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libsoplex.a"
  )

list(APPEND _cmake_import_check_targets libsoplex )
list(APPEND _cmake_import_check_files_for_libsoplex "${_IMPORT_PREFIX}/lib/libsoplex.a" )

# Import target "libsoplex-pic" for configuration "Debug"
set_property(TARGET libsoplex-pic APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(libsoplex-pic PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "CXX"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libsoplex-pic.a"
  )

list(APPEND _cmake_import_check_targets libsoplex-pic )
list(APPEND _cmake_import_check_files_for_libsoplex-pic "${_IMPORT_PREFIX}/lib/libsoplex-pic.a" )

# Import target "libsoplexshared" for configuration "Debug"
set_property(TARGET libsoplexshared APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(libsoplexshared PROPERTIES
  IMPORTED_IMPLIB_DEBUG "${_IMPORT_PREFIX}/lib/libsoplexshared.dll.a"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/bin/libsoplexshared.dll"
  )

list(APPEND _cmake_import_check_targets libsoplexshared )
list(APPEND _cmake_import_check_files_for_libsoplexshared "${_IMPORT_PREFIX}/lib/libsoplexshared.dll.a" "${_IMPORT_PREFIX}/bin/libsoplexshared.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
