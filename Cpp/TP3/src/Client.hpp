#ifndef CLIENT_HPP_
#define CLIENT_HPP_
#include <string>
class Client {
 private :
  int _id;
  std::string _nom;
 public :
  Client(int id, const std::string & nom);
  int getId() const ;
  const std::string getNom() const ;
  void afficherClient() const ;
  
};
#endif
