#ifndef CONTROLEUR_HPP_
#define CONTROLEUR_HPP_

#include "Inventaire.hpp"
#include "Vue.hpp"

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

        // Lance l'application.
        void run();
};

#endif
