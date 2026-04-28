#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
} Node;

typedef struct BTREE
{
    Node *root;
    int size;
    int height;
} BTREE;

void initBTREE(BTREE *root);
Node *createNode(int value);
void addChild(BTREE *root, Node *child);
void removeChild(BTREE *root);
Node *search(int key);
void *preOrder(BTREE *root);
void *inOrder(BTREE *root);
void *postOrder(BTREE *root);
int getHeight(BTREE *root);
int getSize(BTREE *root);