
// Author: Stanley Zheng
// ###TODO implement a priority queue
// GNU LICENSE
// Date 2/13/14


#include <iostream>

struct Node{
	Node * next=NULL;
	int value;
};


class PQueue{
public:
	Node* top = NULL;
	void pop(){
	  if(top !=NULL){
	  	 std::cout<< "popping " << top->value << "\n";
	  	 top=top->next;
	  }
	  else
	    std::cout << "your stack is empty\n";
	}
    int push(int num){
	  if(top !=NULL){
	  	 std::cout<< "pushing " << top->value << "\n";

	  	 Node* temp = new Node();
	  	 temp->value = num;
	  	 temp->next  = top;
	  	 top = temp;
	  }
	  else
	    std::cout << "your stack is empty\n";
	}
	void print(){
	  if(top !=NULL){
		Node* current = top;
		while (current !=NULL){
			std::cout << current->value << " -> ";
			current = current->next;
		}
		std::cout << "NULL\n";
	  }
	  else
	    std::cout << "your stack is empty\n";
	}

};

int main(int argc, char const *argv[])
{
	/* code */
	PQueue queue;
	Node* head = NULL;
	Node* temp;
	for (int i = 0; i < 5; i++){
		// temp->value = i;
		// temp->next = stack.top;
		// stack.top = temp;
	//make it a node box
		temp = new Node;
		temp ->value = i;
		//add to head
		temp->next= queue.top;
		queue.top=temp;
	}
	queue.print();
	//pop
	queue.pop();
	queue.push(56);
	queue.push(5);
	queue.print();
	return 0;
}
