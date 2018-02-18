#ifndef LISTE_HPP_
#define LISTE_HPP_
struct Noeud {
  int _valeur;
  Noeud* _suivant;
  Noeud(int valeur, Noeud* suivant);
  ~Noeud();
};

struct Liste {
  Noeud* _tete;
  Liste();
  void ajouterDevant(int valeur);
  int getTaille() const;
  int getElement(int indice) const;
  ~Liste();
};

#endif
