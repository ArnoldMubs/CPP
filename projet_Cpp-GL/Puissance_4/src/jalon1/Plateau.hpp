#ifndef PLATEAU_HPP_
#define PLATEAU_HPP_

#include <iostream>

enum Jetton : int {ROUGE,JAUNE,LIBRE};


#define LIGNES 6
#define COLONNES 7

class Plateau {
  private : 
    Jetton _cellules[LIGNES][COLONNES];
    int _placeLibre[COLONNES];
  
  public :
    Plateau();
  void updatePlaceLibre(int col);
   int getPlaceLibre(int col) const;
  Jetton getJetton (int l,int c) const;
 void setJetton (Jetton jetton,int l,int c);
  bool colonneJouable (int c);
  bool estComplet();
  
};
#endif
