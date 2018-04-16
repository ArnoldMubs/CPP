#include "Livre.hpp"
#include <iostream>
#include <cstring>

Livre::Livre(const std::string & titre,const std::string & auteur,int annee):_titre(titre),_auteur(auteur),_annee(annee){
  if (titre.find(';') != std::string::npos){
      throw std::string( "erreur : titre non valide (';' non autorisé)");
  }if(titre.find('\n') != std::string::npos){
    throw std::string( "erreur : titre non valide ('\n' non autorisé)");
  }if(auteur.find(';') !=  std::string::npos){
      throw std::string( "erreur : auteur non valide (';' non autorisé)");
  }if (auteur.find('\n')!= std::string::npos){
    throw std::string( "erreur : auteur non valide ('\n' non autorisé)");
  }
}

bool Livre::operator < (const Livre & l)const{
  if (_auteur.compare(l._auteur) == 0){
    if (_titre.compare( l._titre) >= 0){
      return false;
    }else {
      return true;
    } 
  }else if (_auteur.compare (l._auteur) < 0)
    return true;
  return false;
}

bool Livre::operator == (const Livre & l) const {
  return _titre==l._titre && _auteur == l._auteur && _annee==l._annee;
}

/* Sortie */

std::ostream& operator <<( std::ostream& os, const Livre& livre){
  os << livre.getTitre() << ";"<< livre.getAuteur() << ";" << livre.getAnnee();
  return os;
}

/* Entree */

std::istream& operator>>(std::istream& is, Livre& l)
{
  std::string str;
  std::getline(is, str, ';');
  l._titre = str;
  std::getline(is, str, ';');
  l._auteur = str;
  std::getline(is, str, ';');
  l._annee = std::stoi(str);

  return (is);  
}


int Livre::getAnnee() const {
  return _annee;
}

const std::string &  Livre::getTitre() const{
  return _titre;
}

const std::string & Livre::getAuteur() const{
  return _auteur;
}
