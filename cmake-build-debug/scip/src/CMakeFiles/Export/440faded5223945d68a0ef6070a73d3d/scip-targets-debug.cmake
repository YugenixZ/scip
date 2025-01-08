#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "scip" for configuration "Debug"
set_property(TARGET scip APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(scip PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/bin/scip.exe"
  )

list(APPEND _cmake_import_check_targets scip )
list(APPEND _cmake_import_check_files_for_scip "${_IMPORT_PREFIX}/bin/scip.exe" )

# Import target "libscip" for configuration "Debug"
set_property(TARGET libscip APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(libscip PROPERTIES
  IMPORTED_IMPLIB_DEBUG "${_IMPORT_PREFIX}/lib/libscip.dll.a"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/bin/libscip.dll"
  )

list(APPEND _cmake_import_check_targets libscip )
list(APPEND _cmake_import_check_files_for_libscip "${_IMPORT_PREFIX}/lib/libscip.dll.a" "${_IMPORT_PREFIX}/bin/libscip.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
