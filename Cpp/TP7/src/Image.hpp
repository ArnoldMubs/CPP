#ifndef IMAGE_HPP
#define IMAGE_HPP

#include <string>

class Image {

private :
  int _largeur;
  int _hauteur;
  int*_pixels;

public :
  Image(int largeur, int hauteur);
  Image(const Image& img);
  int getLargeur() const;
  int getHauteur() const;
  int getPixel(const int& i, const int& j) const;
  void setPixel(const int& i, const int& j, const int& couleur);
  ~Image();
  void remplir();
  void ecrirePnm(const std::string& nomFichier);
  void bordure(int couleur, int epaisseur);

};

#endif
