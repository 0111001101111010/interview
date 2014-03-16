#include <iostream>
//max num

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
	int B[] = {5,6,10,100};
	int max = 0;
	//Works no Error
	for (auto& x: B){
		if (x >max)
			max = x;
	}
    //std::cout <<max;
    //100
    max((&B)[4]);
	return 0;
}