#include <iostream>
#include "Fibonacci.hpp"

int fibonacciRecursif (int n){
  if (n<=1){
    return n; 
  }
  else {
    return fibonacciRecursif(n-1)+fibonacciRecursif(n-2);
  }
}

int fibonacciIteratif (int n){
  int fn_2 = 0;
  int fn_1 = 1;
  int res;
  for(int i = 2; i <= n ; i++){
    res = fn_2+fn_1;
    fn_2 = fn_1;
    fn_1=res;
  }

  return res;
}


