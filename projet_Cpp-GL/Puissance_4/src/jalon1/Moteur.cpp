#include "Moteur.hpp"
#include <iostream>

///////////////////////////////////////
// Moteur
///////////////////////////////////////

Moteur::Moteur(){}

/*
 * Permet d'ajouter un jetton dans le plateau
*/
bool Moteur::ajouterJetton(Jetton jetton,int col){
  bool complete = true;
  int ligne = _plateau.getPlaceLibre(col);
  if ( ligne >= 0 && _plateau.colonneJouable(col)){ 
    _plateau.setJetton(jetton,ligne,col);//_plateau[col][libre] = jetton;
    _plateau.updatePlaceLibre(col);
  }else {
    complete  = false;
  }
  return complete;
    
}

/*
 *
 */
bool Moteur::checkHorizontal(int c, Jetton jetton){
  int cpt = 1;
  int l = _plateau.getPlaceLibre(c)+1;
  int limG = c-1, limD = COLONNES;
  int j = c+1;
  while (limG > 0 || j<limD){
     if ( limG>0 && _plateau.getJetton (l,limG) == jetton ) {
       cpt++;
     }else {
       limG = 0;
     }
     if (j<limD && _plateau.getJetton (l,j) == jetton ){
       cpt++;
     }else {
       j = limD;
     }
      j++;
      limG--;

     if (cpt == 4){
       return true;
     }  
  }
    return false;
}

/*
 *
 */
bool Moteur::checkVertical(int c, Jetton jetton){
  int cptH=0,cptB=0,cpt = 1;
  int l = _plateau.getPlaceLibre(c)+1;
  int limH = l-1, limB= LIGNES;
  int j = l+1;
  while (limH > 0 || j<limB){
     if ( limH>0 && _plateau.getJetton (limH,c) == jetton ) {
       cpt++;
       cptH++;
     }else {
       limH = 0;
     }
     if (j<limB && _plateau.getJetton (j,c) == jetton ){
       cpt++;
       cptB++;
     }else {
       j = limB;
     }
      j++;
      limH--;

     if (cpt == 4){
       return true;
     }  
  }
  return false;
}

/*
 *
 */
bool Moteur::checkDiagonal(int c, Jetton jetton){
  return false;
}

/*
 Return le Jetton du joueur Gagnant
*/
bool Moteur::win(int c, Jetton jetton){
  if(checkVertical( c, jetton) || checkHorizontal( c,  jetton) || checkHorizontal( c,  jetton)){
    return true;
  }
  return false;
}

/*
 *
 */
bool Moteur::egalite (){
  return _plateau.estComplete();
}


/*
 *
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
