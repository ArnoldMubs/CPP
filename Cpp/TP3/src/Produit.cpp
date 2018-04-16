#include "Produit.hpp"
#include <iostream>

Produit::Produit(int id, const std::string & description):_id(id),_description(description){}

int Produit::getId() const {
  return _id;
}
const std::string Produit::getDescription() const{
  return _description;
}
void Produit::afficherProduit() const{
  std::cout<<"Produit : "<<_id<<" Description : "<<_description<<std::endl;
}
