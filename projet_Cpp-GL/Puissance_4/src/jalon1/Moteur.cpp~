#include "Moteur.hpp"
#include <iostream>

Moteur::Moteur(){}

bool Moteur::ajouterJetton(Jetton jetton,int col){
  bool complete = false;
  int ligne = _plateau.getPlaceLibre(col);
  if ( ligne >= 0){ 
    _plateau.setJetton(jetton,ligne,col);//_plateau[col][libre] = jetton;
    checkHorizontal(ligne,col, jetton);
    _plateau.updatePlaceLibre(col);
  }else {
    complete  = true;
  }
  return complete;
    
}

bool Moteur::checkHorizontal(int l, int c, Jetton jetton){
  int cptG=0, cptD= 0, cpt = 1;
  int limG = c-1, limD = COLONNES, limH = l, limB= LIGNES - l - 1;
  int i=0, j = c+1;
  std::cout<< "c: "<<c<<std::endl;
  std::cout<< "limD: "<<limD<<std::endl;
  std::cout<< "limG: "<<limG<<std::endl;
  while (limG > 0 || j<limD){
     if ( limG>0 && _plateau.getJetton (l,limG) == jetton ) {
       cptG++;
       cpt++;
       std::cout<< "cptG: "<<cptG<<std::endl;
     }
     if (j<limD && _plateau.getJetton (l,j) == jetton ){
       cptD++;
       cpt++;
       std::cout<< "cptD: "<<cptD<<std::endl;
     }
      j++;
      limG--;

     
     if (cpt == 4){
        std::cout<< "cpt: "<<cpt<<std::endl;
       return true;
     }
     
  }
 
    return false;
}

bool Moteur::checkVertical(){
  return false;
}

bool Moteur::checkDiagonal(){
  return false;
}

void Moteur::afficher(){
  char affichage;
  for (int i =0;i < LIGNES;i++){
    for(int j = 0; j<COLONNES;j++){
      switch (_plateau.getJetton(i,j)) {
      case ROUGE : affichage = 'R';break;
      case JAUNE : affichage = 'J';break;
      default : affichage = '.';
     }
      std::cout<<affichage;
    }

    std::cout<<std::endl;
  }
}
