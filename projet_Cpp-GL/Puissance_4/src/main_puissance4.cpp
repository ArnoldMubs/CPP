#include "jalon1/Moteur.hpp"
#include <iostream>

int main (int argc, char ** argv) {
  Moteur puissance4;
  Jetton r=ROUGE, j=JAUNE;
  puissance4.ajouterJetton(r,0);
  puissance4.ajouterJetton(r,0);
  puissance4.ajouterJetton(r,0);
  puissance4.ajouterJetton(r,0);
  puissance4.ajouterJetton(j,1);
  puissance4.ajouterJetton(j,2);
  puissance4.ajouterJetton(j,3);
  puissance4.ajouterJetton(j,4);
  puissance4.checkHorizontal();
  
  puissance4.afficher();
  
  return 0;
}
