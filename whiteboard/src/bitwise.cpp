//bitwise operator pratice
#include <iostream>
#include <cstdlib>

using std::cout;
using std::endl;

int main(int argc, char const *argv[])
{
     int a,b,c = 0;

     //shift over two places
     //<- 1000 =  8
     // 100000 = 32
     a = 8 << 2;
     cout << a << endl;
     //shift over two places
     //-> 1000 == 8
     // 10 = 2
     b = 8 >> 2 ;
     //shift over two places
     //-> 1000 == 8
     // 10000000 = 2
     cout << b << endl;
     c = 8 << 4;
     //2^3 + 2^4 = 2^7
     //
     cout << c << endl;

     return 0;
}