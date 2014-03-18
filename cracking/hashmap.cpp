/* Quick Datastructure review
* stanley zheng
*/

#include <cstdlib>
#include <iostream>
#include <stack>
#include <queue>
int main(int argc, char const *argv[])
{
//vector
	std::vector<int> z;
	for (int i=0; i<5; i++)
		z.emplace_back(i);
	z.pop_back();
	std::cout << z.front();
	std::cout << z.size();
	std::cout<<"\n";

//heap
	//copy paste http://en.cppreference.com/w/cpp/algorithm/make_heap
	std::vector<int> v { 3, 1, 4, 1, 5, 9 };

    std::cout << "initially, v: ";
    for (auto i : v) std::cout << i << ' ';
    std::cout << '\n';

    std::make_heap(v.begin(), v.end());

    std::cout << "after make_heap, v: ";
    for (auto i : v) std::cout << i << ' ';
    std::cout << '\n';

    std::pop_heap(v.begin(), v.end());
    auto largest = v.back();
    v.pop_back();
    std::cout << "largest element: " << largest << '\n';

//stack LIFO
	std::stack<int> a;
	for (int i=0; i<5; i++)
		a.push(i);
	a.pop();
	std::cout << a.top();
	std::cout<<"\n";
//queue FIFO
	//also Deque and enque
	std::queue<int> b;
	for (int i=0; i<5; i++)
		b.push(i);
	b.pop();
	std::cout << b.front();
	std::cout<<"\n";
//hashmap
// 	std::map<int> c;
// for (int i=0; i<5; i++)
// 		b.push(i);
// 	std::cout<<"\n";
// 	b.pop();
// 	std::cout << b.front();
//pair
	/* code */
	return 0;
}