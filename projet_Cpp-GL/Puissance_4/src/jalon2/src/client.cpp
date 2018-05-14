#include <uWS.h>

#include <iostream>
using namespace std;

using PtrClientWs_t = uWS::WebSocket<uWS::CLIENT> *;

void saisirEtEnvoyer(PtrClientWs_t ws) {
  // saisit un message au clavier
  cout << "Entrez un message (vide pour quitter) : " << endl;
  string msg;
  getline(cin, msg);
  // quitte si le message est vide
  if (msg == "")
    exit(0);
  // sinon envoie le message au serveur
  cout << "On envoit :" << msg << endl;
  ws->send(msg.c_str(), msg.size(), uWS::TEXT);
}

// fonction appelée une fois, lorsque le serveur accepte la connexion
void clientOnConnection(PtrClientWs_t ws, uWS::HttpRequest) {
  cout << "Connexion ok" << endl;
  saisirEtEnvoyer(ws);
}

// fonction appelée à chaque fois qu'on reçoit un message du serveur
void clientOnMessage(PtrClientWs_t ws, char *message, size_t length, uWS::OpCode) {
  cout << "On reçoit :" << string(message, length) << endl;
  saisirEtEnvoyer(ws);
}

int main() {
  uWS::Hub hub;
  hub.onConnection(clientOnConnection);
  hub.onMessage(clientOnMessage);
  //hub.connect("ws://echo.websocket.org:80", nullptr);
  hub.connect("ws://localhost:3000", nullptr);
  hub.run();
  return 0;
}

