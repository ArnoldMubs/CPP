#include <CppUTest/CommandLineTestRunner.h>

#include "Moteur.hpp"




TEST_GROUP(GroupMoteur) { };


TEST(GroupMoteur,AjouterJetton_1) 
{
  Moteur puissance4;
  Jetton r =ROUGE, j=JAUNE;
  CHECK_EQUAL(puissance4.ajouterJetton(j,0),true);
}

//colonne non jouable
TEST(GroupMoteur,AjouterJetton_2) 
{
  Moteur puissance4;
  Jetton r =ROUGE, j=JAUNE;
  CHECK_EQUAL(puissance4.ajouterJetton(j,10),false);
}

//colonne pleine
TEST(GroupMoteur,AjouterJetton_3) 
{
  Moteur puissance4;
  Jetton r =ROUGE, j=JAUNE;
  puissance4.ajouterJetton(j,1);
  puissance4.ajouterJetton(r,1);
  puissance4.ajouterJetton(j,1);
  puissance4.ajouterJetton(r,1);
  puissance4.ajouterJetton(j,1);
  puissance4.ajouterJetton(r,1);
       
  CHECK_EQUAL(puissance4.ajouterJetton(j,1),false);
}

//Teste victoire sur la ligne
TEST(GroupMoteur,CheckHorizontal_1) 
{
  Moteur puissance4;
  Jetton r =ROUGE, j=JAUNE;
  puissance4.ajouterJetton(j,1);
  puissance4.ajouterJetton(j,2);
  puissance4.ajouterJetton(j,3);
  puissance4.ajouterJetton(j,4);
       
  CHECK_EQUAL(puissance4.checkHorizontal(1,j),true);
}

TEST(GroupMoteur,CheckHorizontal_2) 
{
  Moteur puissance4;
  Jetton r =ROUGE, j=JAUNE;
  puissance4.ajouterJetton(j,1);
  puissance4.ajouterJetton(j,3);
  puissance4.ajouterJetton(j,4);
       
  CHECK_EQUAL(puissance4.checkHorizontal(3,j),false);
}

//Teste victoire sur la colonne
TEST(GroupMoteur,CheckVertical_1) 
{
  Moteur puissance4;
  Jetton r =ROUGE, j=JAUNE;
  puissance4.ajouterJetton(j,1);
  puissance4.ajouterJetton(j,1);
  puissance4.ajouterJetton(j,1);
  puissance4.ajouterJetton(j,1);
       
  CHECK_EQUAL(puissance4.checkHorizontal(1,j),true);
}

TEST(GroupMoteur,CheckVertical_2) 
{
  Moteur puissance4;
  Jetton r =ROUGE, j=JAUNE;
  puissance4.ajouterJetton(j,1);
  puissance4.ajouterJetton(r,1);
  puissance4.ajouterJetton(j,1);
  puissance4.ajouterJetton(j,1);
       
  CHECK_EQUAL(puissance4.checkHorizontal(1,j),false);
}

//Teste victoire sur la diagonale
TEST(GroupMoteur,CheckDiagonal_1) 
{
  Moteur puissance4;
  Jetton r =ROUGE, j=JAUNE;
  puissance4.ajouterJetton(j,1);
  puissance4.ajouterJetton(r,2);
  puissance4.ajouterJetton(j,2);
  puissance4.ajouterJetton(j,1);
  puissance4.ajouterJetton(r,3);
  puissance4.ajouterJetton(r,3);
  puissance4.ajouterJetton(j,3);
  puissance4.ajouterJetton(r,4);
  puissance4.ajouterJetton(r,4);
  puissance4.ajouterJetton(r,4);
  puissance4.ajouterJetton(j,4);
       
  CHECK_EQUAL(puissance4.checkHorizontal(1,j),true);
}

TEST(GroupMoteur,CheckDiagonal_2) 
{
  Moteur puissance4;
  Jetton r =ROUGE, j=JAUNE;
  puissance4.ajouterJetton(j,1);
  puissance4.ajouterJetton(r,1);
  puissance4.ajouterJetton(j,1);
  puissance4.ajouterJetton(j,1);
       
  CHECK_EQUAL(puissance4.checkHorizontal(1,j),false);
}
