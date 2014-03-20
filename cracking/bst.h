 /*
 * File: bst.h
 * -----------
 * This file provides an interface for a general binary search
 * tree class template.
 */
#define _bst_h
#include "cmpfn.h"
#include "disallowcopy.h"
/*
 * Class: BST
 * ----------
 * This interface defines a class template for a binary search tree.
 * For maximum generality, the BST is supplied as a class template.
 * The data type is set by the client. The client specializes the
 * tree to hold a specific type, e.g. BST<int> or BST<studentT>.
 * The one requirement on the type is that the client must supply a
 * a comparison function that compares two elements (or be willing
 * to use the default comparison function that relies on < and ==).
 */
template <typename ElemType>
class BST {
 public:
/*
 * Constructor: BST
 * Usage: BST<int> bst;
 * BST<song> songs(CompareSong)
 * BST<string> *bp = new BST<string>;
 * -----------------------------------------
 * The constructor initializes a new empty binary search tree.
 * The one argument is a comparison function, which is called
 * to compare data values. This argument is optional, if not
 * given, OperatorCmp from cmpfn.h is used, which applies the
 * built-in operator < to its operands. If the behavior of <
 * on your type is defined and sufficient, you do not need to
 * supply your own comparison function.
 */
 BST(int (*cmpFn)(ElemType one, ElemType two) = OperatorCmp);
/*
 * Destructor: ~BST
 * Usage: delete bp;
 * ------------------
 * This function deallocates the storage for a tree.
 */
 ~BST();
 /*
 * Method: find
 * Usage: if (bst.find(key) != NULL) . . .
 * ----------------------------------------
 * This method applies the binary search algorithm to find a key
 * in this tree. The argument is the key you're looking for. If
 * a node matching key appears in the tree, find returns a pointer
 * to the data in that node; otherwise, find returns NULL.
 */
 ElemType *find(ElemType key);
/*
 * Method: add
 * Usage: bst.add(elem);
 * ---------------------
 * This method adds a new node to this tree. The elem argument
 * is compared with the data in existing nodes to find the proper
 * position. If a node with the same value already exists, the
 * contents are overwritten with the new copy, and the add method
 * returns false. If no matching node is found, a new node is
 * allocated and added to the tree, and the method returns true.
 */
 bool add(ElemType elem);
/*
 * Method: remove
 * Usage: bst.remove(key);
 -------------------------
 * This method removes a node in this tree that matches the
 * specified key. If a node matching key is found, the node
 * is removed from the tree and true is returned. If no match
 * is found, no changes are made and false is returned.
 */
 bool remove(ElemType key);
/*
 * Method: mapAll
 * Usage: bst.mapAll(PrintToFile, outputStream);
 * ---------------------------------------------
 * This method iterates through the binary search tree and
 * calls the function fn once for each element, passing the
 * element and the client's data. That data can be of whatever
 * type is needed for the client's callback. The order of calls
 * is determined by an InOrder walk of the tree.
 */
 template <typename ClientElemType>
 void mapAll(void (*fn)(ElemType elem, ClientElemType &data),
 ClientElemType &data);
private:
#include "bstpriv.h"
};

#include "bstimpl.cpp"