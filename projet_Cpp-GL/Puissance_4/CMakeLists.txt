cmake_minimum_required( VERSION 3.0 )
project( TP_CPP )
set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -Wextra" )
set( CMAKE_BUILD_TYPE Debug )

find_package( PkgConfig REQUIRED )
pkg_check_modules( PKG REQUIRED cpputest )
include_directories( ${PKG_INCLUDE_DIRS} )

#jalon 1
 
add_executable( moteur.out src/main_puissance4.cpp src/jalon1/Moteur.cpp 
src/jalon1/Plateau.cpp src/jalon1/Joueur.cpp )

#add_executable( main_test.out src/main_test.cpp 
#    src/jalon1/Moteur.cpp src/jalon1/Plateau.cpp )
#target_link_libraries( main_test.out ${PKG_LIBRARIES} )

