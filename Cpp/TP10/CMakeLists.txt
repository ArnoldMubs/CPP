cmake_minimum_required( VERSION 3.0 )
project( TP_CPP )
set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -Wextra" )
set( CMAKE_BUILD_TYPE Debug )

find_package( PkgConfig REQUIRED )
pkg_check_modules( PKG REQUIRED cpputest )
include_directories( ${PKG_INCLUDE_DIRS} )

add_executable( main_liste.out src/main_liste.cpp )

add_executable( main_test.out src/main_test.cpp 
    src/Liste_test.cpp )
target_link_libraries( main_test.out ${PKG_LIBRARIES} )

