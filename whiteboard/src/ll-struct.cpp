#include <iostream>

using namespace std;

struct Node{
  Node* next;
  int data;
};

struct list{
	Node* head;
};

void Print(Node* head);

int main(int argc, char* argv[]){

Node * tmp=NULL, *head=NULL;
//list List;
//List->head = current;
// Create a new node
int data =1;
// Create a new node
Node* newNode = new Node();
newNode->data=data;
newNode->next=NULL;

//head->link=current->link;
if ( tmp != NULL ) {
    // Nodes already present in the list
    // Parse to end of list
 while ( tmp->next != NULL ) {
            tmp = tmp->next;
        }
    // Point the last node to the new node
    tmp->next=newNode;
    }
    else {
    // First node in the list
    head = newNode;
    }

Print(head);

return 0;
}

void Print(Node * head) {

    // Temp pointer
    Node *tmp = head;

    // No nodes
    if ( tmp == NULL ) {
    cout << "EMPTY" << endl;
    return;
    }

    // One node in the list
    if ( tmp->next == NULL ) {
    cout << tmp->data;
    cout << " --> ";
    cout << "NULL" << endl;
    }
    else {
    // Parse and print the list
    do {
        cout << tmp->data;
        cout << " --> ";
        tmp = tmp->next;
    }
    while ( tmp != NULL );

    cout << "NULL" << endl;
    }
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