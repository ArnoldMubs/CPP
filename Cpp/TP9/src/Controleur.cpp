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
  _inventaire.trier();
  return oss.str();
}

void Controleur::chargerInventaire (const std::string & nomFichier){
     ifstream fichier(nomFichier, ios::in);
  if(fichier){
    while(!fichier.eof()){
      std::string nom,date;
      float volume;
      fichier>>nom>>date>>volume;
      
      /* à revoir
      	std::ostringstream oss;
	oss<<fichier;
      */

      _inventaire._bouteilles.push_back(Bouteille{nom,date,volume);
     for (auto & v : _vues)
       v->actualiser();

     
    }
    
  }else
     cerr << "Impossible d'ouvrir le fichier !" << endl;
  
  
}
