#include <iostream>

using std::cout;

struct Node{
Node *next;
int value;
};
const int hash_num = 11;
//hash a prime number, 53 chosen
int hash(int& num){
num = num%hash_num;
return num;
};

int main(){

std::srand(std::time(0));
int num = std::rand();
hash(num);
cout <<num;

	return 0;
}