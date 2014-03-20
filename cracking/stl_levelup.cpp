#include <vector>
#include <iostream>
#include <algorithm>


using namespace std;
 int main(int argc, char const *argv[])
{
	 vector<int> v(10);
	 for(int i = 0; i < 10; i++) {
	      v[i] = (i+1)*(i+1);
	 }
	 for(int i = 9; i > 0; i--) {
	      v[i] -= v[i-1];
	 }
	 for (auto x : v)
	 	 cout << x << ", ";
	 	 cout << v.size();
	 //vector<int> v;
	 for(int i = 1; i < 1000000; i *= 2) {
	      v.push_back(i);
	 }
	 int elements_count = v.size();

	 for(int i = 9; i > 0; i--) {
	      v[i] -= v[i-1];
	 }

	 vector<int> b = {1,2,3,4,5};

	 std::for_each(b.begin(),b.end(),[](int &n){ n=n*2;});
	 cout<<"\n";
	 for (auto i : b)
	  	  cout << i;
//sanity check
	  	    std::vector<int> nums{3, 4, 2, 9, 15, 267};
    std::cout << '\n';
    std::cout << "before: ";
    for (auto n : nums) {
        std::cout << n << " ";
    }
    std::cout << '\n';

    std::for_each(nums.begin(), nums.end(), [](int &n){ n++; });
    std::cout << '\n';
    std::cout << "after:  ";
    for (auto n : nums) {
        std::cout << n << " ";
    }
    vector<int> c;
    //explicit
    std::copy(b.begin(),b.end(),std::back_inserter(c));
    vector<int> d = c;

    for(auto x: c)
    	cout << x ;
    //implicit
    for(auto x: d)
    	cout << x ;

	return 0;
}
