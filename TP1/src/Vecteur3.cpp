#include <iostream>
#include <cmath>
#include "Vecteur3.hpp"

void afficher (vecteur3 v) {
  
  std::cout<<"("<<v.x<<", "<<v.y<<", "<<v.z<<")"<<std::endl;
  
}

void vecteur3::afficher(){
  std::cout << "("<<x<<" ,"<<y<<" ,"<<z<<")"<<std::endl;
}

int norme (vecteur3 v) {
  int n;
  n = std::pow(v.x,2)+std::pow(v.y,2)+std::pow(v.z,2);
  return std::sqrt(n);
}

int produitScalaire (vecteur3 u, vecteur3 v) {
  return norme(u)*norme(v);
}


vecteur3 addition (vecteur3 u, vecteur3 v) {
  vecteur3 somme;
  somme.x = u.x + v.x;
  somme.y = u.y + v.y;
  somme.z = u.z + v.z;
  return somme;
}
