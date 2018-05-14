cmake_minimum_required( VERSION 3.0 )
project( echo )
set(CMAKE_CXX_STANDARD 14)

find_package( OpenSSL REQUIRED )
find_package( ZLIB REQUIRED )

include_directories( ext/uWS ${OPENSSL_INCLUDE_DIR} ${ZLIB_INCLUDE_DIRS} )

add_library( uWebSockets STATIC 
  ext/uWS/Socket.cpp
  ext/uWS/HTTPSocket.cpp
  ext/uWS/Networking.cpp
  ext/uWS/WebSocket.cpp
  ext/uWS/Hub.cpp
  ext/uWS/Node.cpp
  ext/uWS/Epoll.cpp
  ext/uWS/Group.cpp
  ext/uWS/Extensions.cpp )
target_link_libraries( uWebSockets ${OPENSSL_LIBRARIES} ${ZLIB_LIBRARIES} )

add_executable( client.out src/client.cpp )
target_link_libraries( client.out uWebSockets )

add_executable( server.out src/server.cpp )
target_link_libraries( server.out uWebSockets )

install ( TARGETS client.out server.out DESTINATION bin )

