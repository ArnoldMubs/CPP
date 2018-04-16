
#include <CppUTest/CommandLineTestRunner.h>

#include "Image.hpp"

#include <sstream>

TEST_GROUP(GroupLivre) { };

TEST(GroupLivre, Image_constructeur) 
{
        Image image(40,50);
	CHECK_EQUAL(image.getLargeur(),40);
	CHECK_EQUAL(image.getHauteur(),50);
}

TEST(GroupLivre, Image_accesseur) 
{
   Image image(40,50);
   CHECK_EQUAL(image.getLargeur(),40);
   CHECK_EQUAL(image.getHauteur(),50);
   image.setPixel(1,1,0);
   image.getPixel(1,1);
}




