#include <stdlib.h>
#include <stdio.h>

typedef struct Node
{
    int data;
    struct Node *children;

} Node;

typedef struct TREE
{
    Node *root;
} TREE;

Node *createNode(int value);
void addNode(TREE *tree, Node *child);
void preOrder(TREE *tree);
void postOrder(TREE *tree);