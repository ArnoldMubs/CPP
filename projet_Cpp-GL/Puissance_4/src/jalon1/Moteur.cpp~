#include "Moteur.hpp"
#include <iostream>

Moteur::Moteur(){}

bool Moteur::ajouterJetton(Jetton jetton,int col){
  bool complete = false;
  int ligne = _plateau.getPlaceLibre(col);
  if ( ligne >= 0){ 
    _plateau.setJetton(jetton,ligne,col);//_plateau[col][libre] = jetton;
    _plateau.updatePlaceLibre(col);
  }else {
    complete  = true;
  }
  return complete;
    
}

bool Moteur::checkHorizontal(){
    int ligne, colonne;
    for ( ligne = 0; ligne < LIGNES ; ligne++)
    {
        for ( colonne = 0; colonne < COLONNES; colonne++)
        {
            _game[ligne][colonne].horz=1;
            _game[ligne][colonne].vert=1;
            _game[ligne][colonne].dg=1;
            _game[ligne][colonne].dd=1;
        }
    }
  // pour le horizontal
    for ( ligne = 0; ligne < LIGNES ; ligne++)
    {
      for ( colonne = 1; colonne < COLONNES; colonne++)
        {
	  
	  if ((_plateau.getJetton(ligne,colonne)==_plateau.getJetton(ligne,colonne-1)&&(_plateau.getJetton(ligne,colonne)!=LIBRE)))
	    // meme couleur
            {
	      std::cout<<"Ho "<<_game[ligne][colonne].horz<<std::endl;
	      _game[ligne][colonne].horz=_game[ligne][colonne].horz+1;
	      if (_game[ligne][colonne].horz==4){
		std::cout<<"youpie"<<std::endl;
		return true;
	      }
	      
            }
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
