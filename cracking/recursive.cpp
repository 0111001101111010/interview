#include <iostream>

void printLots(std::string phrase, int n){
	std::cout << n << " " << phrase << "\n";
	if (n != 1)
		printLots(phrase,n-1);
};



int main(int argc, char const *argv[])
{
//	binary_tree root;
//	root.insert("stuff");
// recurse me scotty

//basic print me x times!
	printLots("shit", 10);
	printLots("friend",1);
	return 0;
}