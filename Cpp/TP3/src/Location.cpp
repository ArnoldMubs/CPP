#include "Location.hpp"
#include <iostream>

Location::Location (int idClient, int idProduit){
  _idClient = idClient;
  _idProduit = idProduit;
}

void Location::afficherLocation() const{
  std::cout<<"Client :"<<_idClient<<" Produit :"<<_idProduit<<std::endl;
}
