//Stanley ZHeng
//Remove a Stirng
#include <iostream>

int main(int argc, char const *argv[])
{

	//can delete one char occurance
	//#todo robust for two
	std::string word = "longword";
	//delete the g
	int deleted = 0;
	char discard = 'g';
	for (int i =0; i < word.length(); i++){
		if (word[i]==discard)
			deleted++;
		word[i]=word[i+deleted];
	}
	word.resize(word.length()-1);
	std::cout << word;
	return 0;
}