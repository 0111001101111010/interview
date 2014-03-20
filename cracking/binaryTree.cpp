#include <iostream>

using namespace std;

struct nodeT {
    string key;
    struct nodeT* left;
    struct nodeT* right;
};
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

int main(int argc, char const *argv[])
{
	/* code */
	nodeT *dwarfTree = NULL;
	InsertNode(dwarfTree, "Grumpy");
	InsertNode(dwarfTree, "Sleepy");
	DisplayTree(dwarfTree);
	return 0;

};