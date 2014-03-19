//Stanley ZHeng
//Remove a Stirng
#include <iostream>

int main(int argc, char const *argv[])
{

	//can delete one char occurance
	//#todo robust for two
	std::string word = "longgword";
	//delete the g
	int deleted = 0;
	char discard = 'g';
	bool flag[word.length()];
	for (int i =0; i < word.length(); i++){
		if (word[i]==discard){
			flag[i]=true;
			//deleted++;
		}
	}
	std::string words = "";
	for (auto i: flag)
		 if (words[i]!=true)
		 	 words=words+word[i];
	//flag array
	//lets reuse same string

	word.resize(words.length()-deleted);
	std::cout << words;
	return 0;
}