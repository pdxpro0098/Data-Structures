#include "TREE.h"

int main()
{
    TREE *tree = (TREE *)malloc(sizeof(TREE));

    initTree(tree);

    tree->root = createNode(1);

    addChild(tree->root, 2);
    addChild(tree->root, 3);
    addChild(tree->root, 4);

    Node *n3 = tree->root->firstChild->nextSibling;

    addChild(n3, 5);
    addChild(n3, 6);

    printTree(tree);

    freeTree(tree->root);

    free(tree);

    return 0;
}