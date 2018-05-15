#ifndef MOTEUR_HPP_
#define MOTEUR_HPP_

#include "Plateau.hpp"


class Moteur {
  private : 
    Plateau _plateau;
  public :
    Moteur();
  bool ajouterJetton(Jetton jetton,int col);
  void afficher ();
  bool winner();
  bool checkHorizontal(int c, Jetton jetton);
  bool checkVertical (int c, Jetton jetton);
  bool checkDiagonal(int c, Jetton jetton);
  bool win(int c, Jetton jetton);
  bool egalite();
  
};
#endif
