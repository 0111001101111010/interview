#include <iostream>

using namespace std;

struct Node{
	int data;
	Node* next;
};

int main(int argc, char* argv[]){

Node* head=NULL;
Node* temp=NULL;


//create list 0-2
//adding to the head
for (int i = 0; i < 3; i++){
	//make it a node box
	temp = new Node;
	temp ->data = i;
	//add to head
	temp->next= head;
	head=temp;
}

//adding to the tail
for (int i = 3; i < 6; i++){
	//make it a node box
	temp = new Node;
	temp ->data = i;
	temp ->next =NULL;
	//add to tail
	Node* current = head;
	while(current->next!=NULL){
		current=current->next;
	}
	current->next=temp;
}

//removing a value
Node* current = head;


//printer
Node* current = head;
while(current!=NULL){
	cout << current->data;
	current=current->next;
}

return 0;
};