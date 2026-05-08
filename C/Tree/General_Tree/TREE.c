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

void addChild(Node *parent, int data)
{
    if (parent == NULL)
        return;

    Node *child = createNode(data);

    if (child == NULL)
        return;

    if (parent->firstChild == NULL)
    {
        parent->firstChild = child;
    }
    else
    {
        Node *temp = parent->firstChild;

        while (temp->nextSibling != NULL)
        {
            temp = temp->nextSibling;
        }

        temp->nextSibling = child;
    }
}
