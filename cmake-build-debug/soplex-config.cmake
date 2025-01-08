if(NOT TARGET libsoplex)
  include("${CMAKE_CURRENT_LIST_DIR}/soplex-targets.cmake")
endif()

set(SOPLEX_LIBRARIES libsoplex)
set(SOPLEX_PIC_LIBRARIES libsoplex-pic)
set(SOPLEX_INCLUDE_DIRS "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src;D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/cmake-build-debug/soplex")
set(SOPLEX_FOUND TRUE)

if(on)
  find_package(Boost 1.65.0)
  include_directories(${Boost_INCLUDE_DIRS})
endif()

if(off)
  set(SOPLEX_WITH_PAPILO TRUE)
endif()
