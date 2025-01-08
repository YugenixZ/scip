file(REMOVE_RECURSE
  "../../bin/example.exe"
  "../../bin/example.exe.manifest"
  "../../bin/example.pdb"
  "../../lib/libexample.dll.a"
  "CMakeFiles/example.dir/example.cpp.obj"
  "CMakeFiles/example.dir/example.cpp.obj.d"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/example.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
