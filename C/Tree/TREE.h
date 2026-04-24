#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *nodeArray;

} Node;

typedef struct TREE
{
    Node *root;
} TREE;
