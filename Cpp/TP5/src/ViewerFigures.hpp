#ifndef VIEWERFIGURES_HPP_
#define VIEWERFIGURES_HPP_
#include <gtkmm.h>
#include "ZoneDessin.hpp"
class ViewerFigures {
 protected :
  Gtk::Main _kit;
  Gtk::Window _window;
  ZoneDessin _dessin;
 public :
  ViewerFigures(int argc, char ** argv);
  void run();
  
};
#endif
