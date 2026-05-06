#include "BST.h"

int main()
{
    BST *tree = (BST *)malloc(sizeof(BST));
    initBST(tree);
    insert(tree, 1);
    insert(tree, 2);
    insert(tree, 3);
    insert(tree, 4);
    insert(tree, 5);
    insert(tree, 6);
    insert(tree, 34);
    delete(tree, 4);
    inOrder(tree);
    return 0;
}
