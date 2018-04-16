#ifndef PRODUIT_HPP_
#define PRODUIT_HPP_
#include <string>
class Produit {
 private :
  int _id;
  std::string _description;
 public :
  
  Produit(int id, const std::string & description);
  int getId() const ;
  const std::string getDescription() const ;
  void afficherProduit() const ;
  
};
#endif
