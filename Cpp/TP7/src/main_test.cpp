#include <CppUTest/CommandLineTestRunner.h>
#include "Image.cpp"

int main(int argc, char ** argv)
{
  MemoryLeakWarningPlugin::turnOffNewDeleteOverloads();
   return CommandLineTestRunner::RunAllTests(argc, argv);
}
