#include <iostream>
#include <cmath>
#include <gtkmm.h>
#include "PolygoneRegulier.hpp"

PolygoneRegulier::PolygoneRegulier(const Couleur & couleur, const Point & centre, int rayon, int nbCotes):FigureGeometrique(couleur),_nbPoints(nbCotes){
     //calcul des points
  _points = new Point[nbCotes];
  double cote = ANGLE / nbCotes;
  for(int i = 0; i < nbCotes; ++i){
    _points[i]._x = (std::cos(cote * i) * rayon) + centre._x;
    _points[i]._y = (std::sin(cote * i) * rayon) + centre._y;
  }
  
}
void PolygoneRegulier::afficher (const Cairo::RefPtr<Cairo::Context> cr) const{
   std::cout<<"PolygoneRegulier "<<_couleur._r <<"_"<<_couleur._g <<"_"<<_couleur._b<<" ";
  int xc = 640 / 2;
  int yc = 480 / 2;
  cr->set_line_width(10.0);
  cr->set_source_rgb(_couleur._r,_couleur._g,_couleur._b);
  cr->move_to(xc, yc);
  for (int i=0; i < _nbPoints; i++){
    std::cout<<_points[i]._x<<"_"<<_points[i]._y<<" ";
    cr->line_to(_points[i]._x, _points[i]._y);
    
  }
  std::cout<<std::endl;
  cr->stroke();
}
int PolygoneRegulier::getNbPoints () const{
  return _nbPoints;
}
const Point & PolygoneRegulier::getPoint(int indice) const{
  return _points[indice];
}

