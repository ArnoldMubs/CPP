#include <CppUTest/CommandLineTestRunner.h>

#include "Liste.hpp"

TEST_GROUP(GroupListe) { };

TEST(GroupListe, struct_Noeud_test1) 
{
  Noeud premier(2,nullptr);
  
  CHECK_EQUAL(premier._valeur, 2);
}

TEST(GroupListe, struct_Noeud_test2) 
{
  Noeud premier(2,new Noeud(7,nullptr));
  
  CHECK_EQUAL(premier._valeur, 2);
  CHECK_EQUAL(premier._suivant->_valeur, 7);
}

TEST(GroupListe, ajouterDevant_test) 
{
  Liste l;
  l._tete = new Noeud(1,new Noeud(2,nullptr));
  l.ajouterDevant(0);
  CHECK_EQUAL(0, l._tete->_valeur);
}

TEST(GroupListe, getTaille_test) 
{
  Liste l;
  l._tete = new Noeud(1,new Noeud(2,nullptr));
  CHECK_EQUAL(2, l.getTaille());
}

TEST(GroupListe, getElement_test) 
{
  Liste l;
  l._tete = new Noeud(1,new Noeud(2,nullptr));
  CHECK_EQUAL(2, l.getElement(1));
}

