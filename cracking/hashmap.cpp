/* Quick Datastructure review
* stanley zheng
*/

#include <cstdlib>
#include <iostream>
#include <stack>
#include <queue>
int main(int argc, char const *argv[])
{
//stack LIFO
	std::stack<int> a;
	for (int i=0; i<5; i++)
		a.push(i);

	a.pop();
	std::cout << a.top();

//queue FIFO
	//also Deque and enque
	std::queue<int> b;
	for (int i=0; i<5; i++)
		b.push(i);
	std::cout<<"\n";
	b.pop();
	std::cout << b.front();
//hashmap
	std::map<int> c;
for (int i=0; i<5; i++)
		b.push(i);
	std::cout<<"\n";
	b.pop();
	std::cout << b.front();
//pair
	/* code */
	return 0;
}