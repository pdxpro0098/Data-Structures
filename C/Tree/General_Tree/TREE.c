#include "TREE.h"

void initTree(TREE *tree)
{
    tree->root = NULL;
}

Node *createNode(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->firstChild = NULL;
    newNode->nextSibling = NULL;

    return newNode;
}
