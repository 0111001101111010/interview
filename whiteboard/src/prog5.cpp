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
	i=5;
	iq=ip;
	cout << ip << "\n";
	printf("%d\n", *ip);

	ip=&j;
	cout << ip << "\n";
	printf("%d\n", *ip);
	j=5;
	i=5;
	ip=&j;
	cout << ip << "\n";
	printf("%d\n", *ip);

//comparisons
	//compare pointers
	if(ip==iq)
		cout <<"Same Pointer\n";
	else
		cout <<"nope\n";
	//compare addresses
	if(&ip==&iq)
		cout <<"Same Address?\n";
	else
		cout <<"nope\n";
	//compare values
	if(*ip==*iq)
		cout <<"Same Value?\n";
	else
		cout <<"nope\n";

return 0;
}
