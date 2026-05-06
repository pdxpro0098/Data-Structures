#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
} Node;

typedef struct BST
{
    Node *root;
    int size;
} BST;

void initBST(BST *tree);
Node *createNode(int value);
void insert(BST *tree, int data);
void delete(BST *tree, int key);
Node *search(BST *tree, int key);
void preOrder(BST *tree);
void inOrder(BST *tree);
void postOrder(BST *tree);
int BST_Height(BST *tree);
int BST_Size(BST *tree);