#include <iostream>

struct Node{
int Key = -1;
Node* Parent = NULL;
Node* Left = NULL;
Node* Right = NULL;
};

using namespace std;

void addNode(int key, Node* root){
    // No elements. Add the root
    if ( root == NULL ) {
        cout << "add root node ... " << key << endl;
        Node* n = new Node();
        n->Key=key;
    root = n;
    }
    else {
    cout << "add other node ... " << key << endl;
    addNode(key, root);

	}
}
// Print the tree
void walk(Node* node)
{
    if ( node )
    {
        std::cout << node->Key << " ";
        walk(node->Left);
        walk(node->Right);
    }
}
int main(int argc, char const *argv[])
{
	/* code */
	Node* root;
	addNode(3,root.Left);
	addNode(4,root.Left);
	walk(root);

	return 0;

};