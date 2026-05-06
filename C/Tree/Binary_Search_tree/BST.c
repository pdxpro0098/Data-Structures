#include "BST.h"
#include "..\..\UTILITY.h"

void initBTREE(BST *tree)
{
    tree->root = NULL;
    tree->size = 0;
};

Node *createNode(int value)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void insert(BST *tree, int data) {};

void delete(BST *tree) {};

Node *search(BST *tree, int key) {};

void preOrder(BST *tree) {};

void inOrder(BST *tree) {};

void postOrder(BST *tree) {};

int HEIGHT(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int leftHeight = HEIGHT(root->left);
    int rightHeight = HEIGHT(root->right);
    return MAX(leftHeight, rightHeight) + 1;
}

int BST_Height(BST *tree)
{
    return HEIGHT(tree->root);
}

int BST_Size(BST *tree)
{
    return tree->size;
};
