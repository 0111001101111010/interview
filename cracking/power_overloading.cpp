//starcraft ladder

#include <iostream>
#include <utility>

using namespace std;

struct Player{
	string name;
	int elo;
	//friend function

	friend bool operator<(const Player& a, const Player& b){

	if (a.elo<b.elo)
		return true;
	else
		return false ;
	};
	friend bool operator==(const Player& a, const Player& b){

	if (a.name==b.name)
		return true;
	else
		return false ;
	};
	/* //implicity
	bool operator<(const Player& b){

	if (this->elo<b.elo)
	    return true;
	else
		return false;
	}
	*/
};

int main(int argc, char const *argv[])
{
	/* code */
	Player boxer, mma;
	boxer.name = "slayers boxer";
	boxer.elo = 1600;
	mma.name = "STL mma";
	mma.elo = 1500;
	cout << "whos better?\n";
	using namespace std::rel_ops;
	if (boxer > mma == true)
		cout << boxer.name;
	else
		cout << mma.name;
	return 0;
};
