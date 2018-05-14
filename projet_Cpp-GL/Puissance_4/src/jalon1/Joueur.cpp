#include "Joueur.hpp"

std::ostream & operator<<(std::ostream & os, Joueur joueur) {
  switch (joueur) {
    case ROUGE : os << 'R'; break;
    case JAUNE : os << 'J'; break;
    case PERSONNE : os << 'X'; break;
    default: os << '.';
  }
  return os;
}

std::istream & operator>>(std::istream & is, Joueur & joueur) {
  char chr = is.get();
  switch (chr) {
    case 'R' : joueur = ROUGE; break;
    case 'J' : joueur = JAUNE; break;
    case 'X' : joueur = PERSONNE; break;
    default: joueur = LIBRE;
  }
  return is;
}

std::string formaterJoueur(Joueur joueur) {
  switch (joueur) {
    case ROUGE : return "Rouge";
    case JAUNE : return "Jaune";
    case PERSONNE : return "Personne";
    default : return "Inconnu";
  }
}

