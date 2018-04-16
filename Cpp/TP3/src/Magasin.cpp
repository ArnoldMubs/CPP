#include "Magasin.hpp"
#include <iostream>

Magasin::Magasin():_idCourantClient(0), _idCourantProduit(0){}

int Magasin::nbClients() const{
  return _clients.size();
}


void Magasin::ajouterClient(const std::string & nom) {
  _clients.push_back(Client(_idCourantClient++,nom));
}

void Magasin::afficherClients() const{
  std::cout<<"\nListe des Clients du Magasin: \n"<<std::endl;
  for (Client c : _clients){
    c.afficherClient();
  }
}

void Magasin::supprimerClient(int idClient){
  bool existe = false;
  int i = 0;
  for (Client c : _clients){
    if(c.getId()==idClient){
      existe = true;
      std::swap(_clients[i],_clients.back());
    }
    i++;
  }

   if (existe){
     _clients.pop_back();
  }else{
    throw std::string("Erreur : ce client n'existe pas");
  }
  
}

int Magasin::nbProduits() const{
  return _produits.size();
}


void Magasin::ajouterProduit(const std::string & nom) {
  _produits.push_back(Produit(_idCourantProduit++,nom));
}

void Magasin::afficherProduits() const{
  std::cout<<"\nListe des Produits du Magasin: \n"<<std::endl;
  for (Produit c : _produits){
    c.afficherProduit();
  }
}
void Magasin::supprimerProduit(int idProduit){
  bool existe = false;
  int i = 0;
  for (Produit p : _produits){
    if(p.getId()==idProduit){
      existe = true;
      std::swap(_produits[i],_produits.back());
    }
    i++;
  }

  if (existe){
  _produits.pop_back();
  }else{
    throw std::string("Erreur : ce produit n'existe pas");
  }
  
}



int Magasin::nbLocations() const{
  return _locations.size();
}
void Magasin::ajouterLocation(int idClient, int idProduit){
  _locations.push_back(Location(idClient,idProduit));
}
void Magasin::afficherLocations() const{
  std::cout<<"\nListe des Locations du Magasin: \n"<<std::endl;
  for (Location l : _locations){
    l.afficherLocation();
  }
}
void Magasin::supprimerLocation(int idClient,int idProduit){
  
  bool existe = false;
  int i = 0;
  for (Location l : _locations){
    if(l._idClient == idClient && l._idProduit == idProduit){
      existe = true;
      std::swap(_locations[i],_locations.back());
    }
    i++;
  }

  if (existe){
    _locations.pop_back();
  }else{
    throw std::string("Erreur : Aucune  Location correspondate");
  }
  
}
bool Magasin::trouverClientDansLocation(int idClient) const{
  int trouve = false ;
  for (Location l : _locations){
    if(l._idClient == idClient){
      trouve = true;
    }
  }
  return trouve;
}
std::vector<int> Magasin::calculerClientsLibres() const{
  std::vector<int> clientsLibres;
  for (Client c : _clients){
    if (!trouverClientDansLocation(c.getId())){
      clientsLibres.push_back(c.getId());
    }
  }
  return clientsLibres;
}
bool Magasin::trouverProduitDansLocation(int idProduit) const{
  int trouve = false ;
  for (Location l : _locations){
    if(l._idProduit == idProduit){
      trouve = true;
    }
  }
  return trouve;
}
std::vector<int> Magasin::calculerProduitsLibres() const{
  std::vector<int> produitsLibres;
  for (Produit p: _produits){
    if (!trouverProduitDansLocation(p.getId())){
      produitsLibres.push_back(p.getId());
    }
  }
  return produitsLibres;
}
