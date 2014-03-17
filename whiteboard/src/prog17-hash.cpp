#include <iostream>
#include <array>
using std::cout;

//open addressing
struct Node{
Node *next=NULL;
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
//cout << hash(num);
Node* temp;
std::array<int, hash_num> table ={};
for (auto &x: table){
		temp = new Node;
		int num = std::rand();
		x = hash(num);
	}
int index = 0;
for (auto x: table){
	  cout << index << " -> "<<  x << "\n";
	  index++;
	}
//std::array<int, 3> a2 = {1, 2, 3};

	return 0;
}