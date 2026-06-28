#include "General_Tree.h"

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

static void PRINTTREE(Node *root, int level)
{
    if (root == NULL)
        return;

    for (int i = 0; i < level; i++)
    {
        printf("  ");
    }

    printf("%d\n", root->data);

    PRINTTREE(root->firstChild, level + 1);

    PRINTTREE(root->nextSibling, level);
}

void printTree(TREE *tree)
{
    if (tree == NULL)
        return;

    PRINTTREE(tree->root, 0);
}

void freeTree(Node *root)
{
    if (root == NULL)
        return;

    freeTree(root->firstChild);
    freeTree(root->nextSibling);

    free(root);
}