#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *firstChild;
    struct Node *nextSibling;
} Node;

typedef struct TREE
{
    Node *root;
} TREE;

void initTree(TREE *tree);
Node *createNode(int data);
void addChild(Node *parent, int data);
void printTree(TREE *tree);
void freeTree(Node *root);