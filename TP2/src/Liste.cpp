#include <iostream>
#include "Liste.hpp"


Liste::Liste(){
  _tete = nullptr;
}

Liste::~Liste(){
  delete _tete;
}

Noeud::Noeud(int valeur, Noeud* suivant){
  _valeur = valeur;
  _suivant =  suivant;
}

Noeud::~Noeud(){
  delete _suivant;
}

void Liste::ajouterDevant(int valeur) {
  _tete = new Noeud(valeur,_tete);
}

int Liste::getTaille() const{
  int cpt = 0;
  Noeud* l = _tete;
  while(l != nullptr){
    cpt += 1;
    l = l->_suivant;  
  }
  return cpt;
}

int Liste::getElement(int indice) const {
  int i = 0;
  Noeud* l = _tete;
  while(i != indice){
    i += 1;
    l=l->_suivant;
  }
  return l->_valeur;
}
