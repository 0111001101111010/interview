#include <iostream>
#include <array>

//dont do qsort, youll show your age


int main(int argc, char const *argv[])
{
	int a[]= {10,8,6,4};
	std::array<int,4> b = {10,8,6,4};
	std::sort(b.begin(), b.end());
	for (auto x: b)
		std::cout<< x;
	return 0;
}