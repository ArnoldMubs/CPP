#ifndef CONTROLEUR_HPP_
#define CONTROLEUR_HPP_

#include "Inventaire.hpp"
#include "Vue.hpp"
#include "VueConsole.hpp"
#include <string>
#include <memory>
#include <vector>

// Controleur : fait le lien entre la Vue et le Modèle. Point d'entrée de
// l'application. Utilisation : construire un Controleur puis run().
class Controleur {
    private:
        Inventaire _inventaire;
        std::vector<std::unique_ptr<Vue>> _vues;

    public:
        Controleur(int argc, char ** argv);
  std::string getTexte();
  void chargerInventaire (const std::string & nomFichier);
        // Lance l'application.
        void run();
  
};

#endif
