#include <iostream>

using namespace std;

struct node{
  node *link;
  int data;
};

struct list{
	node* head;
};

int main(int argc, char* argv[]){

node* temp=NULL, *head=NULL;
//list List;
//List->head = current;
// Create a new node

//temp = new node;
temp->data =1;
temp->link=NULL;
//head->link=current->link;
head=temp->link;

return 0;
}

/*
 * Append a node to the linked list

void List::Append(int data) {

    // Create a new node
    Node* newNode = new Node();
    newNode->SetData(data);
    newNode->SetNext(NULL);

    // Create a temp pointer
    Node *tmp = head;

    if ( tmp != NULL ) {
    // Nodes already present in the list
    // Parse to end of list
        while ( tmp->Next() != NULL ) {
            tmp = tmp->Next();
        }
    // Point the last node to the new node
    tmp->SetNext(newNode);
    }
    else {
    // First node in the list
    head = newNode;
    }
}
*/