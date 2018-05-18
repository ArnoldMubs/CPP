#include "jalon1/Moteur.hpp"
#include "jalon1/Vue.hpp"
#include <iostream>

///////////////////////////////////////
// Puissance 4 : Programme Principal
///////////////////////////////////////

int main () {
  Moteur puissance4;
  Jetton couleur1 =ROUGE, couleur2=JAUNE;
  Jetton joueur;
  int coup;
  joueur = couleur1;
  bool winner  = false, ajout =false;

  while (!winner){
    std::cout<<std::endl;
    puissance4.afficher();
    do {
      std::cout<<"Entrez un coup pour ";
      switch (joueur) { 
      case ROUGE : std::cout<<"R : ";break;
      case JAUNE : std::cout<<"J : ";break;
      default : std::cout<<' ';
      }
      std::cin>>coup;
      ajout = puissance4.ajouterJetton(joueur,coup);
      winner = puissance4.win(coup,joueur);
      
    }while (!ajout);
    joueur = joueur == couleur1 ? couleur2 : couleur1;
  }  
    if (winner){
      puissance4.afficher();
      joueur == couleur1 ? std::cout<<"Vainqueur : J" :  std::cout<<"Vainqueur : R"; std::cout<<std::endl;
    }
  
  return 0;
}
