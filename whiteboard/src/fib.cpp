/*
Solving Fibonacci
Notes: with recursion: Not Ideal

*/
#include <iostream>

int fib (int);
long long longFib(int);

int main(int argc, char* argv[]){
  int num = atoi(argv[1]);
//std::cout<< argv[0] << " " << argv[1];
  std::cout << fib(num) << std::endl;
  std::cout << longFib(num) << std::endl;
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
