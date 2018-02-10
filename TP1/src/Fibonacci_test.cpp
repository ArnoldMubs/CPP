#include "Fibonacci.hpp"
#include <CppUTest/CommandLineTestRunner.h>

TEST_GROUP(GroupFibonacci) { };
TEST(GroupFibonacci, test_fibonacciRecursif) { //test unitaire fibonacci recursif
    int result = fibonacciRecursif(5);
    CHECK_EQUAL(5, result);
}
TEST(GroupFibonacci, fibonacciIteratif) { //test unitaire fibonacci iteratif
    int result = fibonacciIteratif(5);
    CHECK_EQUAL(5, result);
}
