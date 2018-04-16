#include <iostream>
#include "Location.hpp"
#include "Client.hpp"
#include "Produit.hpp"
#include "Magasin.hpp"


int main (){
  Location veloLoc(0,2);
  Client toto(42,"toto");
  Produit velo(2,"Ceci est un velo");
  veloLoc.afficherLocation();
  toto.afficherClient();
  velo.afficherProduit();

  // Test du Magasin
  std::cout<<"\n Les Tests des clients dans magasin\n"<<std::endl;
  
  Magasin monMagasin;
  monMagasin.ajouterClient("toto");
  monMagasin.ajouterClient("tata");
  monMagasin.ajouterClient("titi");
  monMagasin.ajouterClient("tutu");
  monMagasin.afficherClients();
  std::cout<<"\nSuppression du client d'identifiant 1"<<std::endl;
  try {
  monMagasin.supprimerClient(1);
   }catch (std::string const& erreur){
    std::cerr<< erreur <<std::endl; 
  }
  std::cout<<"\nSuppression du client d'identifiant 10"<<std::endl;
  try {
  monMagasin.supprimerClient(10);
   }catch (std::string const& erreur){
    std::cerr<< erreur <<std::endl; 
  }
  monMagasin.afficherClients();

  // Test du Magasin
  std::cout<<"\nLes Tests des Produits dans magasin\n"<<std::endl;
  monMagasin.ajouterProduit("bus");
  monMagasin.ajouterProduit("velo");
  monMagasin.ajouterProduit("voiture");
  monMagasin.ajouterProduit("moto");
  monMagasin.afficherProduits();
  std::cout<<"\nSuppression du Produit d'identifiant 2"<<std::endl;
   try {
  monMagasin.supprimerProduit(2);
  }catch (std::string const& erreur){
    std::cerr<< erreur <<std::endl; 
  }
  monMagasin.afficherProduits();
  std::cout<<"\nSuppression du Produit d'identifiant 5"<<std::endl;
   try {
  monMagasin.supprimerProduit(5);
  }catch (std::string const& erreur){
    std::cerr<< erreur <<std::endl; 
  }

   std::cout<<"\nLes Tests des locations des produits dans magasin \n"<<std::endl;

   monMagasin.ajouterLocation(1,3);
   monMagasin.ajouterLocation(3,2);
   
   monMagasin.afficherLocations();
    std::cout<<"\nSuppression de la location, idClient : 1 idProduit : 3"<<std::endl;
     try {
   monMagasin.supprimerLocation(1,3);
    }catch (std::string const& erreur){
    std::cerr<< erreur <<std::endl; 
  }
    std::cout<<"\nSuppression de la location, idClient : 2 idProduit : 5"<<std::endl;
   try {
     monMagasin.supprimerLocation(1,5);
   }catch (std::string const& erreur){
    std::cerr<< erreur <<std::endl; 
  }
   monMagasin.afficherLocations();

   std::cout<<"Le client 3 existe dans location : ";
   if (monMagasin.trouverClientDansLocation(3)){ std::cout<<"Oui"<<std::endl;
   } else{ std::cout<<"Non"<<std::endl; }

   std::cout<<"Le client 5 existe dans location : ";
   if (monMagasin.trouverClientDansLocation(5)){ std::cout<<"Oui"<<std::endl;
   } else{ std::cout<<"Non"<<std::endl; }

    std::cout<<"Le Produit 12 existe dans location : ";
   if (monMagasin.trouverProduitDansLocation(12)){ std::cout<<"Oui"<<std::endl;
   } else{ std::cout<<"Non"<<std::endl; }

   std::cout<<"Le produit 2 existe dans location : ";
   if (monMagasin.trouverProduitDansLocation(2)){ std::cout<<"Oui"<<std::endl;
   } else{ std::cout<<"Non"<<std::endl; }

   std::vector<int> cl= monMagasin.calculerClientsLibres();
   std::cout<<"Il y a "<<cl.size()<<" Clientss Libres"<<std::endl;
   for (int c : cl ){
     std::cout<<"Client d'id  : "<<c<<" est Libre"<<std::endl;
   }
   
   std::vector<int> pl= monMagasin.calculerProduitsLibres();
   std::cout<<"Il y a "<<pl.size()<<" Produits Libres"<<std::endl;
   for (int p : pl ){
     std::cout<<"Produit d'id  : "<<p<<" est Libre"<<std::endl;
   }
   
  return 0;
}
