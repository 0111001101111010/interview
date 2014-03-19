#include <iostream>
#include <array>

//dont do qsort, youll show your age
//sort  vs stable sort

int main(int argc, char const *argv[])
{
	int a[]= {10,8,6,4};
	std::array<int,4> b = {10,8,6,4};
	//std::array<int,4> c = {10,8,6,4};
	std::sort(b.begin(), b.end());
	//std::stable_sort(c.begin(), c.end());
	for (auto x: b)
		std::cout<< x <<",";
	std::cout << std::endl;

//ternary and the if extention test
	std::cout << "even?\n";
  for (int i = 0; i < 10; ++i){

	for (int i=0;i<1000;++i)
		if (i>-1)
		   (i%2==0) ? std::cout << i << " true\n" : std::cout << i <<" false\n";
	}
	return 0;
}