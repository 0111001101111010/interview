/*
A dictionary in C++
http://stackoverflow.com/questions/1842941/translating-python-dictionary-to-c
*/

#include <iostream>
#include <map>

using namespace std;

typedef map<pair<int,int>, int> Dict;
typedef Dict::const_iterator It;

using namespace std;

int main(){
	Dict d;
   d[std::make_pair(0, 0)] = 0;
   d[std::make_pair(0, 1)] = 1;
   d[std::make_pair(0, 2)] = 2;
   //d[std::make_pair(2, 3)] = 3;
   //d[std::make_pair(3, 2)] = 4;
   //d[std::make_pair(3, 1)] = 5;
   for (It it(d.begin()); it != d.end(); ++it)
   {
      int i(it->first.first);
      int j(it->first.second);
      cout <<it->second <<' '
                <<d[std::make_pair(j, i)] <<'\n';
   }

   cout << "\n\n";
       int n = 1;
    int a[5] = {1, 2, 3, 3, 5};

    // build a pair from two ints
    auto p1 = std::make_pair(n, a[1]);
    std::cout << "The value of p1 is "
              << "(" << p1.first << ", " << p1.second << ")\n";

    // build a pair from a reference to int and an array (decayed to pointer)
    auto p2 = std::make_pair(std::ref(n), a);
    n = 7;
    std::cout << "The value of p2 is "
              << "(" << p2.first << ", " << *(p2.second+1) << ")\n";

	return 0;
}