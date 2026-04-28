#include "TREE.h"

Node *createNode(int value)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = value;
    newNode->children = NULL;
    return newNode;
}

void addNode(TREE *tree, Node *child) {}

