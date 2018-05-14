cmake_minimum_required( VERSION 3.0 )

project( puissance4 )

set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -Wextra" )
set( CMAKE_BUILD_TYPE Debug ) 

find_package( PkgConfig REQUIRED )
pkg_check_modules( GTKMM REQUIRED gtkmm-3.0 )

include_directories( ${GTKMM_INCLUDE_DIRS} )

add_executable( client_gui.out 
  src/Vue.cpp 
  src/client_gui.cpp )
target_link_libraries( client_gui.out ${GTKMM_LIBRARIES} )

install( TARGETS client_gui.out DESTINATION bin )

