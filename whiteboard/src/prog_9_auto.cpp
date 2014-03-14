#include <iostream>
#include <vector>
struct A {
  A() { std::cout << "A"; }
  A(const A &a) { std::cout << "B"; }
  virtual void f() { std::cout << "C"; }
};

int main() {
  A a[3];
  for (auto x : a) {
    x.f();
  }

std::cout <<"\n";

//Vectors
std::vector<int> list;
list.push_back(1);
list.push_back(2);

  for (auto x : list){
  	std::cout <<x;
  }
//Normal Array
std::cout <<"\n";
  int array[5];
  for (auto x : array){
  	std::cout <<x;
  }
}
