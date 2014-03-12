#include <iostream>

using namespace std;

struct Node{
	int data=NULL;
	Node* next;
};
struct List{
	Node* head=NULL;
};

Node* print(Node* temp);
Node* search(Node* current, int search);

int main(int argc, char* argv[]){

Node* head=NULL;
Node* temp=NULL;
List* list= NULL;

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

//searching for a value
Node* current2 = head;

search(head,5);
search(head,7);
//printer
print(head);

return 0;
};


Node* print(Node* current){
	while(current!=NULL){
		cout << current->data;
		current=current->next;
	}
};

Node* search(Node* current, int search){

while(current!=NULL&& current->data!=search){
	current=current->next;
}
	if (current==NULL)
		cout << "data not found!\n";
	else
		cout << "data was found\n";

};