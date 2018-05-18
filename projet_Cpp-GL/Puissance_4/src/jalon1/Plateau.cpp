#include "Plateau.hpp"

///////////////////////////////////////
// Plateau
///////////////////////////////////////
Plateau::Plateau() {
  for (int i =0;i < LIGNES;i++){ 
    for(int j = 0; j<COLONNES;j++){
      _cellules[i][j] = LIBRE;
    }
  }
  for(int j = 0; j<COLONNES;j++){
       _placeLibre[j] = LIGNES-1;
    }
 
}

/*
 * Actualise la place libre pour une col
 */
void Plateau::updatePlaceLibre(int col) {
  _placeLibre[col]--;
}

/*
 * Renvoie la prémière place lire à la colonne col
 */
int Plateau::getPlaceLibre(int col) const {
  return _placeLibre[col];
}

/*
 * Renvoie le jetton à la position (l,c)
 */
Jetton Plateau::getJetton (int l,int c) const {
  return _cellules[l][c];
}

/*
 * Modifie le jetton à la position (l,c)
 */
void Plateau::setJetton (Jetton jetton,int l,int c) {
  if (l*c <= 30){
     _cellules[l][c] = jetton;
  } 
}

/*
 * Prend en entrée la variable x et renvoie vrai s'il est 
 *possible de poser un jeton dans la colonne x.;
 */
bool Plateau::colonneJouable(int c){
  
        bool possible;
	possible =false;
        if ((0<=c) && (c<COLONNES)) {possible=true;}           
        return possible;
}

/* Renvoie vrai si le plateau est complet et faux sinon*/
bool Plateau::estComplet(){
  for (int c=0 ; c < COLONNES; c++){
    if (getPlaceLibre(c) <= 0) {
      return false;
    } 
  }
  return true;
}



