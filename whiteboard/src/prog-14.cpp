#include <initializer_list>
#include <iostream>

struct A {
  A() { std::cout << "1"; }

  A(int) { std::cout << "2"; }

  A(std::initializer_list<int>) { std::cout << "3"; }
};

int main(int argc, char *argv[]) {
  // A a1;
  // A a2{};
  // A a3{ 1 };
  // A a4{ 1, 2 };
int arrayA[] = {1,2,3,4};

for (auto x: arrayA){
	std::cout << x;
}
arrayA[5]=1;
for (auto x: arrayA){
	std::cout << x;
}

}
