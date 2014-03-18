//cout vs printf
#include <iostream>
#include <cstdlib>
#include <ctime>
using std::string;

int main(int argc, char const *argv[])
{
//a
	string words = "words";
//b
	std::srand(std::time(0));
//c
	int a = std::rand();
    std::time_t result = std::time(NULL);

	printf("the number of letters in \"%s\" is %d\n", "words", 5);
	printf("heres a random integer %i\n", a );
	printf("The time is -> %s\n", std::ctime(&result));
	return 0;
}