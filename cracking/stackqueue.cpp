#include <iostream>

struct Node{
	Node * next=NULL;
	int value;
};


class Stack{
public:
	Node* top = NULL;
	void pop(){
	  if(top !=NULL){
	  	 std::cout<< "\npopping " << top->value << "\n";
	  	 top=top->next;
	  }
	  else
	    std::cout << "your stack is empty\n";
	}
    int push(int num){
	  if(top !=NULL){
	  	 std::cout<< "\npushing" << top->value << "\n";
	  	 Node temp;
	  	 temp.value = num;
	  	 temp.next  = top;
	  	 top = &temp;
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
	Stack stack;
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
		temp->next= stack.top;
		stack.top=temp;
	}
	stack.print();
	//pop
	stack.pop();
	stack.push(56);
	stack.push(5);
	stack.print();
	return 0;
}
