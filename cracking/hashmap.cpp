#include <cstdlib>
#include <iostream>
#include <stack>
#include <queue>
int main(int argc, char const *argv[])
{

	std::stack<int> a;
	for (int i=0; i<5; i++)
		a.push(i);

	a.pop();
	std::cout << a.top();


	std::queue<int> b;
	for (int i=0; i<5; i++)
		b.push(i);
	std::cout<<"\n";
	b.pop();
	std::cout << b.front();
	/* code */
	return 0;
}