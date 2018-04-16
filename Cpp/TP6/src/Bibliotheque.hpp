#ifndef BIBLIOTHEQUE_HPP_
#define BIBLIOTHEQUE_HPP_
#include "Livre.hpp"
#include <vector>
class Bibliotheque : public std::vector<Livre> {
  
 public :
  void afficher() const;
  void trierParAuteurEtTitre();
  void trierParAnnee();
  void lireFichier(const std::string & nomFichier);
  void ecrireFichier(const std::string & nomFichier);
};
#endif
