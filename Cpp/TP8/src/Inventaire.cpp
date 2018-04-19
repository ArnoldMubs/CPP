#include "Inventaire.hpp"

/* Sortie */

std::ostream& operator <<( std::ostream& os, const Inventaire& inventaire){
  
  for (Bouteille bouteille :inventaire._bouteilles){
    os << bouteille;
  }
  
  return os;
}

