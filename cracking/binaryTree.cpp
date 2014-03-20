//http://cs.stanford.edu/people/eroberts/courses/cs106b/chapters/13-trees.pdf
#include <iostream>

using namespace std;

struct nodeT {
    string key;
    struct nodeT* left;
    struct nodeT* right;
};

/* implement your comparison condition here somewhere*/
void InsertNode(nodeT * & t, string key) {
	 if (t == NULL) {
	 t = new nodeT;
	 t->key = key;
	 t->left = t->right = NULL;
	 return;
	 }
	 if (key == t->key) return;

		 if (key < t->key) {
		 InsertNode(t->left, key);
		 }
		 else {
		 InsertNode(t->right, key);
		 }
}
void DisplayTree(nodeT *t) {
	 if (t != NULL) {
	 DisplayTree(t->left);
	 cout << t->key << endl;
	 DisplayTree(t->right);
	 }
}
void PreOrderWalk(nodeT *t) {
 if (t != NULL) {
 cout << t->key << endl;
 PreOrderWalk(t->left);
 PreOrderWalk(t->right);
 }
}

void PostOrderWalk(nodeT *t) {
 if (t != NULL) {
 PostOrderWalk(t->left);
 PostOrderWalk(t->right);
 cout << t->key << endl;
 }
}
int main(int argc, char const *argv[])
{
	/* code */
	nodeT *dwarfTree = NULL;
	InsertNode(dwarfTree, "Grumpy");
	InsertNode(dwarfTree, "Sleepy");
	DisplayTree(dwarfTree);
	cout << "\n****derp*****\n";
	InsertNode(dwarfTree,"Dopey");
	InsertNode(dwarfTree,"Doc");
	InsertNode(dwarfTree,"Happy");
	InsertNode(dwarfTree,"Bashful");
	InsertNode(dwarfTree,"Sneezy");
	DisplayTree(dwarfTree);
	cout << "\n****derp*****\n";
	PreOrderWalk(dwarfTree);
	return 0;

};