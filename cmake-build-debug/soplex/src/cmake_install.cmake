# Install script for directory: D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/SCIPOptSuite")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "D:/CLion 2023.3.4/bin/mingw/bin/objdump.exe")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/soplex" TYPE FILE FILES
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/array.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/basevectors.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/changesoplex.hpp"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/classarray.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/classset.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/clufactor.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/clufactor.hpp"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/clufactor_rational.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/clufactor_rational.hpp"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/cring.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/dataarray.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/datahashtable.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/datakey.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/dataset.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/didxset.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/dsvector.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/dsvectorbase.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/dvector.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/enter.hpp"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/exceptions.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/fmt.hpp"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/idlist.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/idxset.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/islist.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/leave.hpp"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/lpcol.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/lpcolbase.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/lpcolset.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/lpcolsetbase.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/lprow.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/lprowbase.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/lprowset.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/lprowsetbase.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/mpsinput.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/nameset.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/notimer.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/random.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/rational.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/ratrecon.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/ratrecon.hpp"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/slinsolver.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/slinsolver_rational.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/slufactor.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/slufactor.hpp"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/slufactor_rational.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/slufactor_rational.hpp"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/sol.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/solbase.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/solverational.hpp"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/solvereal.hpp"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/sorter.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxalloc.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxautopr.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxautopr.hpp"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxbasis.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxbasis.hpp"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxboundflippingrt.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxboundflippingrt.hpp"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxbounds.hpp"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxchangebasis.hpp"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxdantzigpr.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxdantzigpr.hpp"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxdefaultrt.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxdefaultrt.hpp"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxdefines.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxdefines.hpp"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxdesc.hpp"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxdevexpr.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxdevexpr.hpp"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxequilisc.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxequilisc.hpp"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxfastrt.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxfastrt.hpp"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxfileio.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxfileio.hpp"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxgeometsc.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxgeometsc.hpp"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxgithash.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxharrisrt.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxharrisrt.hpp"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxhybridpr.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxhybridpr.hpp"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxid.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxleastsqsc.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxleastsqsc.hpp"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxlp.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxlpbase.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxlpbase_rational.hpp"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxlpbase_real.hpp"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxmainsm.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxmainsm.hpp"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxout.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxpapilo.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxparmultpr.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxparmultpr.hpp"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxpricer.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxquality.hpp"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxratiotester.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxscaler.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxscaler.hpp"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxshift.hpp"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxsimplifier.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxsolve.hpp"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxsolver.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxsolver.hpp"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxstarter.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxstarter.hpp"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxsteepexpr.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxsteeppr.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxsteeppr.hpp"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxsumst.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxsumst.hpp"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxvecs.hpp"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxvectorst.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxvectorst.hpp"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxweightpr.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxweightpr.hpp"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxweightst.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxweightst.hpp"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxwritestate.hpp"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/ssvector.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/ssvectorbase.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/stablesum.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/statistics.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/statistics.hpp"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/svector.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/svectorbase.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/svset.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/svsetbase.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/testsoplex.hpp"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/timer.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/timerfactory.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/unitvector.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/unitvectorbase.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/updatevector.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/updatevector.hpp"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/usertimer.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/validation.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/validation.hpp"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/vector.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/vectorbase.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/wallclocktimer.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/cmake-build-debug/soplex/soplex/config.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex.hpp"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex_interface.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/soplex/external/fmt" TYPE FILE FILES
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/external/fmt/chrono.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/external/fmt/color.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/external/fmt/compile.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/external/fmt/core.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/external/fmt/format-inl.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/external/fmt/format.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/external/fmt/locale.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/external/fmt/os.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/external/fmt/ostream.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/external/fmt/posix.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/external/fmt/printf.h"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/external/fmt/ranges.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/soplex/external/zstr" TYPE FILE FILES
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/external/zstr/zstr.hpp"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/external/zstr/strict_fstream.hpp"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/cmake-build-debug/bin/soplex.exe")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/soplex.exe" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/soplex.exe")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "D:/CLion 2023.3.4/bin/mingw/bin/strip.exe" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/soplex.exe")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/cmake-build-debug/lib/libsoplex.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/cmake-build-debug/lib/libsoplex-pic.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/cmake-build-debug/lib/libsoplexshared.dll.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/cmake-build-debug/bin/libsoplexshared.dll")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/libsoplexshared.dll" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/libsoplexshared.dll")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "D:/CLion 2023.3.4/bin/mingw/bin/strip.exe" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/libsoplexshared.dll")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/soplex/soplex-targets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/soplex/soplex-targets.cmake"
         "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/cmake-build-debug/soplex/src/CMakeFiles/Export/7b30a661feffd7bbb1d77d2bef836267/soplex-targets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/soplex/soplex-targets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/soplex/soplex-targets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/soplex" TYPE FILE FILES "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/cmake-build-debug/soplex/src/CMakeFiles/Export/7b30a661feffd7bbb1d77d2bef836267/soplex-targets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/soplex" TYPE FILE FILES "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/cmake-build-debug/soplex/src/CMakeFiles/Export/7b30a661feffd7bbb1d77d2bef836267/soplex-targets-debug.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/soplex" TYPE FILE FILES
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/cmake-build-debug/soplex/CMakeFiles/soplex-config.cmake"
    "D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/cmake-build-debug/soplex-config-version.cmake"
    )
endif()

