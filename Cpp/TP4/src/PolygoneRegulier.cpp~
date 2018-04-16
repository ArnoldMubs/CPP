#include <iostream>
#include <cmath>
#include "PolygoneRegulier.hpp"

PolygoneRegulier::PolygoneRegulier(const Couleur & couleur, const Point & centre, int rayon, int nbCotes):FigureGeometrique(couleur),_nbPoints(nbCotes){
     //calcul des points
  _points = new Point[nbCotes];
  double cote = ANGLE / nbCotes;
  for(int i = 0; i < nbCotes; ++i){
    _points[i]._x = std::floor(std::cos(cote * i) * rayon) + centre._x;
    _points[i]._y = std::floor(std::sin(cote * i) * rayon) + centre._y;
  }
  
}
void PolygoneRegulier::afficher () const{
  std::cout<<"PolygoneRegulier "<<_couleur._r <<"_"<<_couleur._g <<"_"<<_couleur._b<<" ";
  for (int i=0; i < _nbPoints; i++){
    std::cout<<_points[i]._x<<"_"<<_points[i]._y<<" ";
  }
  std::cout<<std::endl;
}
int PolygoneRegulier::getNbPoints () const{
  return _nbPoints;
}
const Point & PolygoneRegulier::getPoint(int indice) const{
  return _points[indice];
}

