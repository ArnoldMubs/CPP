#include <iostream>
#include "Ligne.hpp"
#include "PolygoneRegulier.hpp"

int main () {
  
  Couleur red(1,0,0);
  Point p1(0,0);
  Point p2(100,200);
  Ligne ligneRouge(red,p1,p2);
  ligneRouge.afficher();
   Couleur green(0,1,0);
   PolygoneRegulier pentagone(green,p2,50,5);
   pentagone.afficher();
  return 0;
}
