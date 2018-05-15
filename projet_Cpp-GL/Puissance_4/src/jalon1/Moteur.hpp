#ifndef MOTEUR_HPP_
#define MOTEUR_HPP_

#include "Plateau.hpp"

typedef struct
{
    int dg;
    int vert;
    int dd;
    int horz;
}Case ;


class Moteur {
  private : 
    Plateau _plateau;
    Case _game[LIGNES][COLONNES];
  public :
    Moteur();
  bool ajouterJetton(Jetton jetton,int col);
  void afficher ();
  Jetton winner();
  bool checkHorizontal(int l,int c, Jetton j);
  bool checkVertical ();
  bool checkDiagonal();
  
};
#endif
