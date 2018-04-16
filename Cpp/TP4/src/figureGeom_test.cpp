#include <CppUTest/CommandLineTestRunner.h>
#include "Ligne.hpp"
#include "PolygoneRegulier.hpp"

TEST_GROUP(GroupFigure) {
 
};

TEST(GroupFigure, couleur_test ) 
{
  Couleur red(1,0,0);
  CHECK_EQUAL (red._r,1);
  CHECK_EQUAL (red._g,0);
  CHECK_EQUAL (red._b,0);
}

TEST(GroupFigure, point_test ) 
{
  Point p1(0,5);
  CHECK_EQUAL (p1._x,0);
  CHECK_EQUAL (p1._y,5);
}

TEST(GroupFigure, polygoneRegulier_test ) 
{
  Point centre(0,0);
  Couleur red(1,0,0);
  Point p0(50,0);
  PolygoneRegulier carre(red,centre,50,4);
  CHECK_EQUAL (carre.getNbPoints(),4);
  CHECK_EQUAL (carre.getPoint(0)._x,p0._x);
  CHECK_EQUAL (carre.getPoint(0)._y,p0._y);
}

 



