#include "Liste.hpp"

#include <iostream>

int main() {

  Liste l;
  l._tete = new Noeud(13,new Noeud(37,nullptr));
  int taille = l.getTaille();
  std::cout<<"Taille de la liste : "<<taille<<std::endl;
  std::cout<<"L'lement d'indice 0 : "<<l.getElement(0)<<std::endl;
   std::cout<<"Tab :  ";
  for (int i =0; i<taille;i++){
    std::cout<<l.getElement(i)<<" ";
  }
  std::cout<<std::endl;
  l.ajouterDevant(5);
  std::cout<<"Tab :  ";
  for (int i =0; i<l.getTaille();i++){
    std::cout<<l.getElement(i)<<" ";
  }
  std::cout<<std::endl;


}
