
Please use this Google doc to code during your interview. To make hands free coding a little easier, we recommend that you use a headset or a phone with speaker option.

Best,
Google Staffing

XOR 
A  ^  B 
0  0    0  
0  1    1
1  0    1 
1  1    0 

A^B
!(a|b)

implement an expression that does the same thing xor using &&, ||, !
bool a,b;

if (  ( a  && !b )  || ( !a && b)  ) 

the intersection of the top 3 and the bottom 
     //bottom          //top 
  if ( ( A  ||  B) && !( A &&B) )
 
Order of operation 
 
( )
!, 
&
^
| 
&&, 
||, 
 
// take an integer and remove from doubley linked list



struct Node{
Node* next; 
Node* previous;
int key;
};


// exist 
boolean function(Node* &head, int search){

Node * current = head;
Node * temp = null;

// want to test for <3 nodes
// dont want to reference null null
while( current != NULL){
	//find my node 
if (current->key == search){
      //return true;
//set forward and back
if (current->previous!=null) 
current->previous->next = current->next;

//fast forward
if  (current->next !=null)
     current->next->previous  = current ->previous; 
if (current == head) 
            	head = current->next;
	
return true;
}
current = current->next;
}
return false;
};
