#ifndef JOUEUR_HPP_
#define JOUEUR_HPP_

#include <iostream>

enum Joueur : char {LIBRE, ROUGE, JAUNE, PERSONNE};

std::ostream & operator<<(std::ostream & os, Joueur joueur);
std::istream & operator>>(std::istream & is, Joueur & joueur);

std::string formaterJoueur(Joueur joueur);

#endif

