#include <iostream>

class A {
public:
  void f() { std::cout << "A\n"; }
  virtual void h() { std::cout << "A\n"; }
  void c() {std::cout <<  "C\n";}
  void d() {std::cout <<  "D1\n";}
};

class B : public A {
public:
  virtual void f() { std::cout << "B\n"; }
  virtual void d() { std::cout << "D2\n"; }
  void h() { std::cout << "B\n"; }
};
class C : public B {
public:
  virtual void f() { std::cout << "B1\n"; }
  virtual void d() { std::cout << "D3\n"; }
  void h() { std::cout << "B\n"; }
};
void print(A &a) { a.f(); a.h(); }
void printVirtual(B &b) { b.f();b.h(); }
void printInherited(B &b) { b.c();b.d(); }
void printCascade(B &b) { b.c();b.d(); }

int main() {
  B b;
  A a;
  C c;
  printf("*****\n");
  print(b);
  printf("*****\n");
  print(a);
  printf("*****\n");
  printVirtual(b);
  printf("*****\n");
  printInherited(b);
  printf("*****\n");
}

//Correct!
//As long as A::f() is not virtual, A::f() will always be called, even if the reference or pointer is actually referring to an object of type B.
//
