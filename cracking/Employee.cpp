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
//#todo shift this backdown
public:
std::string Name;
int Age;
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
		if (lhs.IQ==rhs.IQ){
			//std:: cout << lhs.Name <<" is smarter\n";
			return true;
		}
		else{
			//std:: cout << rhs.Name <<" is not as smart\n";
			return false;
		}
	}
	friend bool operator!=(const Employee& lhs, const Employee& rhs){return !operator==(lhs,rhs);}
	friend bool operator< (const Employee& lhs, const Employee& rhs){
	 /* do actual comparison */
		if (lhs.IQ<rhs.IQ){
			std:: cout << lhs.Name <<" is not as smart as " << rhs.Name << std::endl;
			return true;
		}
		else{
			std:: cout << lhs.Name <<" is smarter than "<< rhs.Name << std::endl;;
			return false;
		}
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
	captain < robot;

	return 0;
}
/*
/Users/stanzheng/code/interview/cracking/Employee.cpp:61:18: error: member function 'getName' not viable: 'this' argument has type 'const Employee', but function is not marked const std:: cout << lhs.getName() <<" is not as smart\n";
*/