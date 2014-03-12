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
for (int i = 0; i < 3; i++){
	//make it a node box
	temp = new Node;
	temp ->data = i;
	temp->next= head;
	head=temp;
}
Node* current = head;

//printer
while(current!=NULL){
	cout << current->data;
	current=current->next;
}

return 0;
};