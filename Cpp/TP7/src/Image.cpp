#include "Image.hpp"
#include <cmath>
#include <fstream>
#include <cstring>


Image::Image(int largeur, int hauteur) : _largeur(largeur), _hauteur(hauteur){

  _pixels = new int [largeur*hauteur];
  
}

Image::Image(const Image& img){

  _largeur = img._largeur;
  _hauteur = img._hauteur;
  _pixels = new int [_largeur*_hauteur];
  std::memcpy(_pixels, img._pixels, _largeur*_hauteur*sizeof(int));

}

int Image::getLargeur() const{

  return _largeur;

}

int Image::getHauteur() const{

  return _hauteur;

}

/*
int Image::getPixel(int i, int j) const {

  return _pixels[_largeur*i+j];

}
void Image::setPixel(int i, int j, int couleur){

  _pixels[_lageur*i+j] = couleur;

}*/

int Image::getPixel(const int& i, const int& j) const {
  
  return _pixels[_largeur*i+j];
  
}

void Image::setPixel(const int& i, const int& j, const int& couleur){
  
  _pixels[_largeur*i+j] = couleur;
  
}

Image::~Image(){
  
  delete[] _pixels;
  
}

void Image::remplir(){

  for(int i = 0; i < getHauteur(); i++){
    for(int j = 0; j < getLargeur(); j++){
          double cosVal = ((std::cos((float)j / 10) + 1)/2)*255;
          setPixel(i,j,std::floor(cosVal));
    }
  }

}

void Image::ecrirePnm(const std::string& nomFichier){

  std::ofstream fic(nomFichier, std::ofstream::out);
  if(!fic){
    throw std::string("erreur : impossible d'écrire le fichier");
  }
    
  const int largeur = getLargeur();
  const int hauteur = getHauteur();

  fic << "P2" << std::endl;
  fic << largeur << " " << hauteur << std::endl;
  fic << "255" << std::endl;
  for(int i = 0; i < hauteur; i++){
    for(int j = 0; j < largeur; j++){
      fic << getPixel(i, j) << " ";           
    }
    fic << std::endl;
  }
}

void Image::bordure(int couleur, int epaisseur){

    for(int i = 0; i < getHauteur(); i++){
      for(int j = 0; j < getLargeur(); j++){

	if(i <= epaisseur || i >= _hauteur - epaisseur){

	  setPixel(i, j, couleur);
	 
	}
	if(j <= epaisseur || j >= _largeur - epaisseur){

	  setPixel(i, j, couleur);
	  
	}
	
    }
  }
}
 

