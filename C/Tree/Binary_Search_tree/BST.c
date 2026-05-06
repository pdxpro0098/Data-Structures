#include "BST.h"
#include "..\..\UTILITY.h"

void initBST(BST *tree)
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
};

int INSERT(Node *root, int data)
{
    Node *prev = NULL;

    while (root != NULL)
    {
        prev = root;

        if (data == root->data)
        {
            return 0;
        }
        else if (data < root->data)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }

    Node *newNode = createNode(data);

    if (newNode == NULL)
    {
        return 0;
    }

    if (data < prev->data)
    {
        prev->left = newNode;
    }
    else
    {
        prev->right = newNode;
    }

    return 1;
}

void insert(BST *tree, int data)
{
    if (tree->root == NULL)
    {
        tree->root = createNode(data);
        tree->size++;
    }
    else
    {
        if (INSERT(tree->root, data))
        {
            tree->size++;
        }
    }
}

void delete(BST *tree) {};

Node *SEARCH(Node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }

    if (key == root->data)
    {
        return root;
    }
    else if (key > root->data)
    {
        return SEARCH(root->right, key);
    }
    else
    {
        return SEARCH(root->left, key);
    }
};

Node *search(BST *tree, int key)
{
    if (tree->size == 0)
    {
        return NULL;
    }

    return SEARCH(tree->root, key);
};

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

void postOrder(BST *tree)
{
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
