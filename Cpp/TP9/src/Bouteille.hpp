#ifndef BOUTEILLE_HPP_
#define BOUTEILLE_HPP_

#include <iostream>
#include <string>

// Modèle : une Bouteille est représentée par le nom du produit, la date de
// mise en bouteille et le volume de la bouteille.
struct Bouteille {
    std::string _nom;
    std::string _date;
    float _volume;
};

/// Flux de sortie au format "<nom>;<date>;<volume>\n".
std::istream & operator>>(std::istream & is, Bouteille & b);

/// Flux d'entrée au format "<nom>;<date>;<volume>\n".
std::ostream & operator<<(std::ostream & os, const Bouteille & b);

#endif
