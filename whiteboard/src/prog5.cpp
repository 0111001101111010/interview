#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[]){

	int *ip,*iq;
	int i=5, j=0;
	iq = &i;
	ip = &i;
	cout << ip << "\n";
	printf("%d\n", *ip);
	i=4;
	iq=ip;
	cout << ip << "\n";
	printf("%d\n", *ip);

	ip=&j;
	cout << ip << "\n";
	printf("%d\n", *ip);
	j=5;
	ip=&j;
	cout << ip << "\n";
	printf("%d\n", *ip);

//comparisons
return 0;
}
