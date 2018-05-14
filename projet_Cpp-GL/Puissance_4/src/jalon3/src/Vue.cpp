#include "Vue.hpp"
using namespace std;

const int TAILLE_BORDURE = 10;
const int NB_LIGNES = 6;
const int NB_COLONNES = 7;

const std::array<Couleur_t, 4> gCouleurs {{
  {1.0, 1.0, 1.0},
  {1.0, 0.0, 0.0},
  {1.0, 1.0, 0.0},
  {0.0, 0.0, 0.0}
}};

bool Dessin::on_draw(const Cairo::RefPtr<Cairo::Context> &cr) {

  int largeur = get_allocation().get_width() - 2*TAILLE_BORDURE;
  int hauteur = get_allocation().get_height() - 2*TAILLE_BORDURE;

  // affiche le fond (bleu)
  cr->set_source_rgb(0.0, 0.0, 1.0);
  cr->rectangle(TAILLE_BORDURE, TAILLE_BORDURE, largeur, hauteur);
  cr->fill();
  cr->stroke();

  // affiche des cases 
  int deltaI = hauteur / NB_LIGNES;
  int deltaJ = largeur / NB_COLONNES;
  afficherCase(cr, 0, 0, deltaI, deltaJ, gCouleurs[0]);
  afficherCase(cr, 1, 1, deltaI, deltaJ, gCouleurs[1]);
  afficherCase(cr, 2, 2, deltaI, deltaJ, gCouleurs[2]);

  return true;
}

void afficherCase(Cairo::RefPtr<Cairo::Context> cr, int i, int j, 
    int deltaI, int deltaJ, const Couleur_t & c) {

	cr->set_line_width(2.0);
	cr->set_source_rgb(c[0], c[1], c[2]);
	float scaleK = 0.2 * std::min(deltaI, deltaJ);
	cr->save();
	cr->translate(TAILLE_BORDURE + (j+0.5)*deltaJ, TAILLE_BORDURE + (i+0.5)*deltaI);
	cr->scale(scaleK, scaleK);
	cr->arc(0.0, 0.0, 1.0, 0.0, 2 * M_PI);
	cr->stroke();
	cr->restore();
}

Vue::Vue(int argc, char ** argv) : _kit(argc, argv) {
  _window.add(_dessin);
  _window.set_title("Puissance4");
  _window.set_default_size(600, 550);
  _window.show_all();
}

void Vue::run() {
  _kit.run(_window);
}

