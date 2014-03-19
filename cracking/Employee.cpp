// Stanley Zheng
// MIT (C) 2014
// Futurama Planet Express Employee System
#include <iostream>
#define SHIP_CAPTAIN "Leela Turanga"
#define SHIP_CAPTAIN_AGE 30
#define SHIP_CAPTAIN_ID  101000
#define SHIP_CAPTAIN_IQ  115

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
	double ID;
	double IQ;
public:
	Employee(){};
	Employee(std::string aName, int aAge, double aID,double aIQ){
		setName(aName);
		setAge(aAge);
		setID(aID);
		setIQ(aIQ);
	};
	~Employee(){};
	//operators
	friend bool operator==(const Employee& lhs, const Employee& rhs){ /* do actual comparison */

	}
	friend bool operator!=(const Employee& lhs, const Employee& rhs){return !operator==(lhs,rhs);}
	friend bool operator< (const Employee& lhs, const Employee& rhs){
	 /* do actual comparison */
	}
	friend bool operator> (const Employee& lhs, const Employee& rhs){return  operator< (rhs,lhs);}
	friend bool operator<=(const Employee& lhs, const Employee& rhs){return !operator> (lhs,rhs);}
	friend bool operator>=(const Employee& lhs, const Employee& rhs){return !operator< (lhs,rhs);}
	//comparisons
	const double getID(){
		return ID;
	}
	void setID(double info){
		ID = info;
	}
	const double getIQ(){
		return IQ;
	}
	void setIQ(double info){
		IQ = info;
	}
	void print(){
	std::cout << "Employee " << this->getID()  << ", " << this->getName() << ", Age " << this->getAge() << ", Their IQ " << this->getIQ() << "\n";
	};

};
int main(int argc, char const *argv[])
{
	/* code */
	//Definition
	Employee pizzaboy;
	pizzaboy.setName("Phillip J Fry");
	pizzaboy.setAge(31);
	pizzaboy.setID(110000);
	pizzaboy.setIQ(5);
	pizzaboy.print();

	//macros
	Employee captain;
	captain.setName(SHIP_CAPTAIN);
	captain.setAge(SHIP_CAPTAIN_AGE);
	captain.setID(SHIP_CAPTAIN_ID);
	captain.setIQ(SHIP_CAPTAIN_IQ);
	captain.print();

	//instantiation
	Employee robot = Employee("Bender Rodrugiez", 2, 101010, 101);
	robot.print();


	return 0;
}