#include <iostream>


template<typename T>
void f(T s)
{
    std::cout << s << '\n';
}

template<typename T>
T add(T a, T b){
	T c = a+b;
	std::cout <<c << '\n' ;
	return c;
}
int main()
{
    f<double>(1); // instantiates and calls f<double>(double)
    f<>('a'); // instantiates and calls f<char>(char)
    f(7); // instantiates and calls f<int>(int)
    void (*ptr)(std::string) = f; // instantiates f<string>(string)
    add(5,6);
    std::string a="dog";
    std::string b="cat";
    add(a,b);
}