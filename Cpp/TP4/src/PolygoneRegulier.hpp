#ifndef POLYGONE_HPP
#define POLYGONE_HPP
#define ANGLE 360
#include "FigureGeometrique.hpp"
#include "Couleur.hpp"
#include "Point.hpp"
class PolygoneRegulier : public FigureGeometrique{
private :
  int _nbPoints;
  Point * _points;
public :
  PolygoneRegulier(const Couleur & couleur, const Point & centre, int rayon, int nbCotes);
  void afficher () const;
  int getNbPoints () const;
  const Point & getPoint(int indice) const;
  virtual ~PolygoneRegulier(){ delete [] _points; };
};

#endif
