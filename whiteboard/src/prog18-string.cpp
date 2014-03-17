//rever a string in place

#include <iostream>
#include <algorithm>

using std::cout;
int main(){

//start
std::string word = "boats";
cout <<word <<"\n";
char temp;
/*
temp=word[0];
word[0]=word[(word.size()-1)];
word[word.size()-1]=temp;
cout <<word <<"\n";

//second go around
temp=word[1];
word[1]=word[(word.size()-1-1)];
word[word.size()-1-1]=temp;
cout <<word <<"\n";*/

//reverse in place!
for (int i=0; i < (word.size()/2);i++){
 	temp = word[i];
	word[i]=word[(word.size()-1-i)];
	word[word.size()-1-i]=temp;
 //cout <<i;
 }
cout << word;
return 0;
};