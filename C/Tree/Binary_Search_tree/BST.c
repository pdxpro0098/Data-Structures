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

void PREORDER(Node *root)
{
    if (root == NULL)
        return;
    printf("%d ", root->data);
    PREORDER(root->left);
    PREORDER(root->right);
}

void preOrder(BST *tree)
{
    PREORDER(tree->root);
};

void INORDER(Node *root)
{
    if (root == NULL)
        return;
    INORDER(root->left);
    printf("%d ", root->data);
    INORDER(root->right);
}

void inOrder(BST *tree)
{
    INORDER(tree->root);
};

void POSTORDER(Node *root)
{
    if (root == NULL)
        return;
    POSTORDER(root->left);
    POSTORDER(root->right);
    printf("%d ", root->data);
}
void postOrder(BST *tree) {
    POSTORDER(tree->root);
};

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
