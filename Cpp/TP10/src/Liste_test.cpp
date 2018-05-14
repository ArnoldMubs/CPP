#include <CppUTest/CommandLineTestRunner.h>

#include "Liste.hpp"

#include <sstream>

TEST_GROUP(GroupListe) { };

TEST(GroupListe, TestListe_1) 
{
	Liste liste;
	CHECK_EQUAL(liste.empty(), true);
}

TEST(GroupListe, TestListe_2) 
{
	Liste liste;
	liste.push_front(1);
	CHECK_EQUAL(liste.empty(), false);
	CHECK_EQUAL(liste.front(), 1);
}

TEST(GroupListe, TestListe_3) 
{
	Liste liste;
	liste.push_front(1);
	liste.push_front(2);
	CHECK_EQUAL(liste.empty(), false);
	CHECK_EQUAL(liste.front(), 2);
}

TEST(GroupListe, TestListe_4) 
{
	Liste liste;
	liste.push_front(1);
	liste.push_front(2);
	liste.clear();
	CHECK_EQUAL(liste.empty(), true);
}

TEST(GroupListe, TestListe_5) 
{
	Liste liste;
	CHECK_EQUAL(liste.begin() != liste.end(), false);
}

TEST(GroupListe, TestListe_6) 
{
	Liste liste;
	liste.push_front(37);
	CHECK_EQUAL(liste.begin() != liste.end(), true);
}

TEST(GroupListe, TestListe_7) 
{
	Liste liste;
	liste.push_front(37);
	Liste::iterator iter = liste.begin();
	CHECK_EQUAL(iter != liste.end(), true);
	++iter;
	CHECK_EQUAL(iter != liste.end(), false);
}

TEST(GroupListe, TestListe_8) 
{
	Liste liste;
	liste.push_front(37);
	Liste::iterator iter = liste.begin();
	CHECK_EQUAL(*iter, 37);
}

TEST(GroupListe, TestListe_9) 
{
	Liste liste;
	liste.push_front(37);
	liste.push_front(42);
	std::ostringstream stream;
	stream << liste;
	CHECK_EQUAL(stream.str(), "42 37 ");
}

