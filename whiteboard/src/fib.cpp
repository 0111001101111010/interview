/*
Solving Fibonacci
Notes: with recursion: Not Ideal

*/
#include <iostream>

int fib (int);

int main(int argc, char* argv[]){

//std::cout<< argv[0] << " " << argv[1];
  std::cout << fib(6);
return 0;
}

int fib(int n){

  if(n==0){
    return 0;
  }

  if(n==1){
    return 1;
  }
  else{
    return fib(n-1)+fib(n-2);
  }
}

long long longFib(int n){
  return n<=2?1:fib(n-1)+fib(n-2);
}
