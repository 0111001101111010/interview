#include <iostream>

using namespace std;

typedef struct Element{
	 struct Element *next;
	 void *data;
} Element;


bool push( Element **stack, void *data );
bool pop( Element **stack, void **data );

bool createStack( Element **stack );
bool deleteStack( Element **stack );

int main(int argc, char* argv[]){

Element stack;

return 0;
}


bool createStack( Element **stack ){
 *stack = NULL;
 return true; }

bool push( Element **stack, void *data ){
 Element *elem = malloc( sizeof(Element) );
if( !elem ) return false;
 elem->data = data; elem->next = *stack;
 *stack = elem;
 return true;
}

bool push( Element **stack, void *data ){ Element *elem = malloc( sizeof(Element) ); if( !elem ) return false;
elem->data = data; elem->next = *stack; *stack = elem; return true;
}