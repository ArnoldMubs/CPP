#ifndef FIGUREGEOM_HPP_
#define FIGUREGEOM_HPP_
#include "Couleur.hpp"

class FigureGeometrique {
 protected :
  Couleur _couleur;
 public :
  FigureGeometrique(const Couleur & couleur);
  const Couleur &  getCouleur () const ;
  virtual ~FigureGeometrique(){};
  
};
#endif
