cmake_minimum_required( VERSION 3.0 )
project( TP_1 )
set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -Wextra" )
set( CMAKE_BUILD_TYPE Debug )  # dans la vraie vie, ne pas mettre cette ligne

add_executable(tp1.out src/main.cpp src/Vecteur3.cpp src/Fibonacci.cpp )


# tests unitaires
find_package( PkgConfig REQUIRED )
pkg_check_modules( PKG REQUIRED cpputest )
include_directories( ${PKG_INCLUDE_DIRS} )
add_executable( main_test src/main_test.cpp src/Vecteur3.cpp
    src/Vecteur3_test.cpp )
target_link_libraries( main_test ${PKG_LIBRARIES} )
