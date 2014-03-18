// Stanley Zheng
// MIT (C) 2014

#include <iostream>
#define SHIP_CAPTAIN "Leela Turanga"
#define SHIP_CAPTAIN_AGE 30
#define SHIP_CAPTAIN_ID  10100
class Person
{
std::string Name;
int Age;

public:
	Person(){};
	~Person(){};
	int getAge(){
		return Age;
	}
	void setAge(int num){
		Age = num;
	}

	std::string getName(){
		return Name;
	}
	//wtf damn it
	void setName(std::string full){
		Name = full;
	}

};

class Employee: public Person
{
	double Id;
public:
	Employee(){};
	~Employee(){};
	double getID(){
		return Id;
	}
	void setID(double info){
		Id = info;
	}
	void print(){
	std::cout << "Employee " << this->getID()  << ", " << this->getName() << ", Age " << this->getAge() << "\n";
	};

};
int main(int argc, char const *argv[])
{
	/* code */
	Employee pizzaboy;
	pizzaboy.setName("Phillip J Fry");
	pizzaboy.setAge(31);
	pizzaboy.setID(110000);
	pizzaboy.print();

	Employee captain;
	captain.setName(SHIP_CAPTAIN);
	captain.setAge(SHIP_CAPTAIN_AGE);
	captain.setID(SHIP_CAPTAIN_ID);
	captain.print();
	return 0;
}