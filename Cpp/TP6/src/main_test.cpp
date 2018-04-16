#include <CppUTest/CommandLineTestRunner.h>
#include "Livre.cpp"

int main(int argc, char ** argv)
{
   return CommandLineTestRunner::RunAllTests(argc, argv);
}
