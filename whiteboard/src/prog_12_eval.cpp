#include <iostream>

template <class T> void f(T &i) { std::cout << 1; }

template <> void f(const int &i) { std::cout << 2; }

struct Bob{

};

int main() {
  const int i = 42;
  const std::string j = "hi";
  Bob b;
  f(i);
  f(j);
  f(b);
}