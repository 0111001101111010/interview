/*
 * Function: InsertNode
 * Usage: InsertNode(t, key);
 * --------------------------
 * This function calls InsertAVL and discards the result.
 */
void InsertNode(nodeT * & t, string key) {
 InsertAVL(t, key);
}
/*
 * Function: InsertAVL
 * Usage: delta = InsertAVL(t, key);
 * ---------------------------------
 * This function enters the key into the tree whose is passed by
 * reference as the first argument. The return value is the change
 * in depth in the tree, which is used to correct the balance
 * factors in ancestor nodes.
 */
int InsertAVL(nodeT * & t, string key) {
 if (t == NULL) {
 t = new nodeT;
 t->key = key;
 t->bf = 0;
 t->left = t->right = NULL;
 return +1;
 }
 if (key == t->key) return 0;
 if (key < t->key) {
 int delta = InsertAVL(t->left, key);
 if (delta == 0) return 0;
 switch (t->bf) {
 case +1: t->bf = 0; return 0;
 case 0: t->bf = -1; return +1;
 case -1: FixLeftImbalance(t); return 0;
 }
 } else {
 int delta = InsertAVL(t->right, key);
 if (delta == 0) return 0;
 switch (t->bf) {
 case -1: t->bf = 0; return 0;
 case 0: t->bf = +1; return +1;
 case +1: FixRightImbalance(t); return 0;
 }
 }
}
/*
 * Function: FixLeftImbalance
 * Usage: FixLeftImbalance(t);
 * ---------------------------
 * This function is called when a node has been found that
 * is out of balance with the longer subtree on the left.
 * Depending on the balance factor of the left child, the
 * code performs a single or double rotation.
 */
void FixLeftImbalance(nodeT * & t) {
 nodeT *child = t->left;
 if (child->bf != t->bf) {
 int oldBF = child->right->bf;
 RotateLeft(t->left);
 RotateRight(t);
 t->bf = 0;
 switch (oldBF) {
 case -1: t->left->bf = 0; t->right->bf = +1; break;
 case 0: t->left->bf = t->right->bf = 0; break;
 case +1: t->left->bf = -1; t->right->bf = 0; break;
 }
 } else {
 RotateRight(t);
 t->right->bf = t->bf = 0;
 }
}
/*
 * Function: RotateLeft
 * Usage: RotateLeft(t);
 * ---------------------
 * This function performs a single left rotation of the tree
 * that is passed by reference. The balance factors
 * are unchanged by this function and must be corrected at a
 * higher level of the algorithm.
 */
void RotateLeft(nodeT * & t) {
 nodeT *child = t->right;
 t->right = child->left;
 child->left = t;
 t = child;
}
/* FixRightImbalance and RotateRight are defined similarly */

