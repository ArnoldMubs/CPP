#include "Plateau.hpp"

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

void Plateau::updatePlaceLibre(int col) {
  _placeLibre[col]--;
}

int Plateau::getPlaceLibre(int col) const {
  return _placeLibre[col];
}

Jetton Plateau::getJetton (int l,int c) const {
  return _cellules[l][c];
}

void Plateau::setJetton (Jetton jetton,int l,int c) {
   _cellules[l][c] = jetton;
}


