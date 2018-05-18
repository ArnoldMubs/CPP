#include <CppUTest/CommandLineTestRunner.h>

#include "Plateau.hpp"


TEST_GROUP(GroupPlateau) { };


TEST(GroupPlateau,Get_set_jetton) 
{
        Plateau plateau;
	Jetton r  = ROUGE,j=JAUNE, l = LIBRE;
	plateau.setJetton(r,0,0);
	plateau.setJetton(j,0,1);
	plateau.setJetton(l,0,2);
	CHECK(plateau.getJetton(0,0) == r);
	CHECK(plateau.getJetton(0,1) == j);
	CHECK(plateau.getJetton(0,2) == l);
	
}

TEST(GroupPlateau,GetPlaceLibre_1) 
{
        Plateau plateau;
	Jetton r  = ROUGE,j=JAUNE;
	plateau.setJetton(r,0,1);
	plateau.updatePlaceLibre(1);
	plateau.setJetton(j,0,1);
	plateau.updatePlaceLibre(1);
	CHECK(plateau.getPlaceLibre(1) == 3);
	
}

TEST(GroupPlateau,GetPlaceLibre_2) 
{
        Plateau plateau;
	Jetton r  = ROUGE;
	plateau.setJetton(r,0,2);
	CHECK_EQUAL(plateau.getPlaceLibre(2), 4);
	
}

TEST(GroupPlateau,GetPlaceLibre_2) 
{
        Plateau plateau;
	Jetton r  = ROUGE;
	plateau.setJetton(r,0,2);
	plateau.updatePlaceLibre(2);
	CHECK_EQUAL(plateau.getPlaceLibre(2),4);
	
}

TEST(GroupPlateau,ColonneJouable_1) 
{
        Plateau plateau;
	CHECK_EQUAL(plateau.colonneJouable(2),true);
	
}


TEST(GroupPlateau,ColonneJouable_2) 
{
        Plateau plateau;
	CHECK_EQUAL(plateau.colonneJouable(10),false);
	
}

TEST(GroupPlateau,Plateau_complet_2) 
{
        Plateau plateau;
	CHECK_EQUAL(plateau.estComplete(), false);
	
}

TEST(GroupPlateau,Plateau_complet_2) 
{
        Plateau plateau;
	Jetton r  = ROUGE;
	for (int l; l<LIGNES; l++){
	  for (int c; c < COLONNES; c++){
	    	plateau.setJetton(r,i,j);
		plateau.updatePlaceLibre(j);
	  }
	}

	CHECK_EQUAL(plateau.estComplete(), true);
	
}

