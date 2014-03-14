//http://cppquiz.org/quiz/question/27?result=OK&answer=B&did_answer=Answer
//polymorphic behavior
#include <iostream>

struct A {
  virtual std::ostream &put(std::ostream &o) const {
    return o << 'A';
  }
};

struct B : A {
  virtual std::ostream &put(std::ostream &o) const {
    return o << 'B';
  }
};
//base pointer structure shouldbeused
//direct reference
std::ostream &operator<<(std::ostream &o, const A &c) {
  return c.put(o);
}

int main() {
  B b;
  A a;
  std::cout << a;
  std::cout << b;
}