#ifndef LOCATION_HPP_
#define LOCATION_HPP_
struct Location {
  int _idClient;
  int _idProduit;
  Location (int idClient, int idProduit);
  void afficherLocation () const; 
};
#endif
