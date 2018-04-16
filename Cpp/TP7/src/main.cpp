#include "Image.hpp"
#include <iostream>

int main(){

  Image img(500,500);
  Image img2(500,500);
  std::string nomFichier("test");

  img.remplir();
  img.bordure(0, 4);
  img.ecrirePnm(nomFichier);
  

}
