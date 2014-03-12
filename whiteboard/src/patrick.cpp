#include <iostream>
using namespace std;
struct Node{
int data;
Node* next;
};
int main(int argc, char* argv[]){

Node* head =NULL;
Node* temp=NULL;
temp = new Node;

//create list 0-2
for (int i = 0; i < 3; i++){
	temp ->data = i;

	temp->next=NULL;
	head = temp;
}
Node* current = head;

//printer
while(current!=NULL){
	cout << current->data;
	current=current->next;
}

return 0;
};