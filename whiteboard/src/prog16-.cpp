#include <iostream>
//max num
#include <algorithm>
#include <array>
	//causes an error
	int max(int (&array)[4]){
		int max = 0;
		for (auto& x: array){
			if (x >max)
				max = x;
		}
		std::cout<<max;
	return max;
	};

int main(){

	int A[] = {1,2,3,4,5};
	//std::array<int,4> B {5,6,10,100};
	std::array<int, 4> a2 = {5, 2, 3,100};
    std::sort(a2.begin(), a2.end());
	int max = 0;
	//Works no Error
	for (auto& x: a2){
		x=x*x;
	}
    std::cout <<max << "\n";
    //100
    //max((&B)[4]);
    std::cout<<a2.size()<<"\n";
    std::reverse_copy(a2.begin(), a2.end(),
    	std::ostream_iterator<int>(std::cout, " "));
	return 0;
}