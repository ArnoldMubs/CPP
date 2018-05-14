#include <uWS.h>

#include <iostream>
using namespace std;

using PtrServerWs_t = uWS::WebSocket<uWS::SERVER> *;

void serverOnConnection(PtrServerWs_t ws, uWS::HttpRequest) {
  cout << "connexion client" << endl;
}
  
void serverOnDisconnection(PtrServerWs_t ws, int, char*, size_t) {
  cout << "deconnexion client" << endl;
}

void serverOnMessage(PtrServerWs_t ws, char *message, size_t length, uWS::OpCode) {
  cout << "echo:" << string(message, length) << endl;
  ws->send(message, length, uWS::TEXT);
}

int main() {
  uWS::Hub hub;
  hub.onConnection(serverOnConnection);
  hub.onMessage(serverOnMessage);
  hub.onDisconnection(serverOnDisconnection);
  hub.onMessage(serverOnMessage);
  hub.listen(3000);
  cout << "serveur ok" << endl;
  hub.run();
  return 0;
}

