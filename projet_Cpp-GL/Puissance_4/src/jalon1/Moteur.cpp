#include "Moteur.hpp"
#include <iostream>
#include <sstream>

///////////////////////////////////////
// Moteur
///////////////////////////////////////

Moteur::Moteur(){}

/*
 * Permet d'ajouter un jetton dans le plateau
*/
bool Moteur::ajouterJetton(Jetton jetton,int col){
  bool complete = true;
  if (_plateau.colonneJouable(col)){
    int ligne = _plateau.getPlaceLibre(col);
    if ( ligne >= 0){ 
      _plateau.setJetton(jetton,ligne,col);//_plateau[col][libre] = jetton;
      _plateau.updatePlaceLibre(col);
    }else{
      complete  = false;
    }
  }
  else {
    complete  = false;
  }
  return complete;
    
}

/*
 * verifie si le jetton à gagné et renvoie vrai, sinon renvoie faux
*/
bool Moteur::win(int c, Jetton jetton){

  int compte = 0;
  int di = _plateau.getPlaceLibre(c)+1;
  int dj = c;
  int i;
							/* TEST VERTICAL */
  i = LIGNES-1;
  c = dj;
  while ((compte<4) && (i>0)){
      if (_plateau.getJetton(i,dj) == jetton){
	 compte ++;
	 i--;
       }else{
	 compte = 0;
         i--;
       }
 }
							/* TEST HORIZONTAL */
 i = di;

 c = COLONNES-1;
 while ((compte<4) && (c>0)){
   if (_plateau.getJetton(di,c) == jetton){
      compte ++;
      c--;
   }else{
      compte = 0;
      c--;
   }
 }
                                                      /* TEST DIAGONALE */
  // Diagonale 1
  i = di;
  c = dj;
  while (i<LIGNES && c > 0){
    i++;
    c--;
  }
  while (compte<4 && (i>0 && c<COLONNES)){
    if (_plateau.getJetton(i,c) == jetton){
      compte ++;
      c++;
      i--;
   }else{
      compte = 0;
      c++;
      i--;
   }
  }

   // Diagonale 2
  i = di;
  c = dj;
  while (i>0 && c > 0){
    i--;
    c--;
  }
  while (compte<4 && (i<=LIGNES && c<=COLONNES)){
    if (_plateau.getJetton(i,c) == jetton){
      compte ++;
      c++;
      i++;
   }else{
      compte = 0;
      c++;
      i++;
   }
  }
  
 
  if (compte == 4){
    return true;
  }
    return false;
}

/*
 * Test l'egalité de la partie
 */
bool Moteur::egalite (){
  return _plateau.estComplet();
}


/*
 * Affiche le plateau
 */
void Moteur::afficher(){
  char affichage;
  for (int i =0;i <= LIGNES;i++){
    std::cout<<i;
  }std::cout<<std::endl;
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
