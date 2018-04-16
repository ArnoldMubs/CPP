#include <CppUTest/CommandLineTestRunner.h>

#include "Magasin.hpp"

TEST_GROUP(GroupMagasin) {
 
};

TEST(GroupMagasin, supprimerClient_test) 
{
  Magasin monMagasin;
  CHECK_THROWS("Erreur : ce client n'existe pas",monMagasin.supprimerClient(5));
}

TEST(GroupMagasin, supprimerProduit_test) 
{
Magasin monMagasin;
  CHECK_THROWS("Erreur : ce produit n'existe pas",monMagasin.supprimerProduit(5));
}



