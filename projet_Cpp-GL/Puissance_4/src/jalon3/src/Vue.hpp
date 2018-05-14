#ifndef VUE_HPP_
#define VUE_HPP_

#include <gtkmm.h>

using Couleur_t = std::array<float, 3>;

class Dessin : public Gtk::DrawingArea {
  protected:
    bool on_draw(const Cairo::RefPtr<Cairo::Context> &cr) override;	
};

void afficherCase(Cairo::RefPtr<Cairo::Context> cr, int i, int j, 
    int deltaI, int deltaJ, const Couleur_t & c);

class Vue {
  private:
    Gtk::Main _kit;
    Gtk::Window _window;
    Dessin _dessin;

  public:
    Vue(int argc, char ** argv);
    void run();
};

#endif

