#include <iostream>
#include <gtkmm.h>
#include "ViewerFigures.hpp"
#include "ZoneDessin.hpp"
#include "Ligne.hpp"
#include "PolygoneRegulier.hpp"

int main (int argc, char ** argv) {

  ZoneDessin();
  ViewerFigures figures(argc, argv);
  figures.run();
}
