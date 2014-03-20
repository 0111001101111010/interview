#include <iostream>

void printLots(std::string phrase, int n){
	std::cout << n << " " << phrase << "\n";
	if (n != 1)
		printLots(phrase,n-1);
};

int factorial(int n){

return (n != 1)? n*factorial(n-1) : n*1;
}

int main(int argc, char const *argv[])
{
//	binary_tree root;
//	root.insert("stuff");
// recurse me scotty

//basic print me x times!
	printLots("shit", 10);
	printLots("friend",1);
//factorial
	//base case breaks the rule
	//breaking down into multiple problems
	//double recursion
	std::cout<<factorial(3);
	return 0;
}