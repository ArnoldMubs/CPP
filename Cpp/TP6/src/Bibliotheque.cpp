#include <iostream>
#include <algorithm>
#include "Bibliotheque.hpp"
#include <fstream>
#include <string>



void Bibliotheque::afficher() const{
  const_iterator it_livre;
  for (it_livre = begin(); it_livre != end(); ++it_livre){
    std::cout<< *it_livre <<std::endl;
  }
}


void Bibliotheque::trierParAuteurEtTitre(){
  std::sort(begin(),end());
}


void Bibliotheque::trierParAnnee(){
  std::sort(begin(),end(),[](const Livre& l1,const Livre& l2) {return l1.getAnnee() < l2.getAnnee();});
}



void Bibliotheque::lireFichier(const std::string & nomFichier){

  ifstream fichier(nomFichier, ios::in);
  if(fichier){
    while(!fichier.eof()){
      std::string titre,auteur;
      int annee;
      fichier>>titre>>auteur>>annee;
    }
    
  }else
     cerr << "Impossible d'ouvrir le fichier !" << endl;
}



void Bibliotheque::ecrireFichier(const std::string & nomFichier){
  ofstream fichier(nomFichier, ios::out | ios::trunc);
  if(fichier){
    
  const_iterator it_livre;
   for (it_livre = begin(); it_livre != end(); ++it_livre){
     fichier<< *it_livre <<std::endl;
   }
   
  }else
     cerr << "Impossible d'ouvrir le fichier !" << endl;
}
