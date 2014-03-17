//rever a string in place

#include <iostream>
#include <algorithm>

using std::cout;
int main(){
	//start
	std::string word = "boats";
	cout << word << "\n";
	char temp;
	//reverse in place!
	for (int i=0; i < (word.size()/2);i++){
	 	temp = word[i];
		word[i]=word[(word.size()-1-i)];
		word[word.size()-1-i]=temp;
	 }
	cout << word << "\n";

	//algorithm reverse reverse
	std::reverse(word.begin(),word.end());
	cout <<word << "\n";
	return 0;
};