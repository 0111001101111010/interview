#include <iostream>

using namespace std;

class IntElement{
  public:
  	//constructor
  	IntElement(int value): next( NULL), data(value){}

  	//destructor
  	 ~IntElement(){}

  	IntElement *getNext() const{
  			return next;
  		}
  	int getValue(){
  		return data;
  	}

  	//setters
  	void setNext( IntElement *elem){
  		next = elem;
  	}
  	void setData(int value){
  		data = value;
  	}
  private:
  	IntElement *next;
  	int data;
};

//template one
template <class T>
class ListElement{
  public:
  	//constructor
  	ListElement(const T& value): next( NULL), data(value){}
  	//destructor
  	 ~ListElement(){}

  	ListElement *getNext() const{
  			return next;
  		}
  	const T& getValue(){
  		return data;
  	}

  	//setters
  	void setNext( ListElement *elem){
  		next = elem;
  	}
  	void setData(const T& value){
  		data = value;
  	}
  private:
  	ListElement *next;
  	const T& data;
};



int main(int argc, char* argv[]){

IntElement* p = NULL;
IntElement list(5);

*p = list;

return 0;
};
