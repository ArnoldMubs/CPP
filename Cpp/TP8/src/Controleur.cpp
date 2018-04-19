#include "Controleur.hpp"

#include <cassert>
#include <fstream>
#include <iostream>
#include <sstream>

Controleur::Controleur(int argc, char ** argv) {
    _vues.push_back(std::make_unique<VueGraphique>(argc, argv, *this));
    _vues.push_back(std::make_unique<VueConsole>(*this));
}

void Controleur::run() {
    for (auto & v : _vues)
        v->run();
}

std::string Controleur::getTexte(){
  std::ostringstream oss;
  oss<<_inventaire;
  return oss.str();
}

void Controleur::chargerInventaire (const std::string & nomFichier){
    _inventaire._bouteilles.push_back(Bouteille{"mescaline", "2013-06-18", 0.1});
     for (auto & v : _vues)
       v->actualiser();
	
}
