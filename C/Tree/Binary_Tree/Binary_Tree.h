#include <stdio.h>
#include <stdlib.h>
#define MAX(a, b) (a > b) ? a : b;

typedef struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
} Node;

typedef struct Queue
{
    int size;
    int capacity;
    int front;
    int rear;
    Node *queue[100];
} Queue;

void initQueue(Queue *queue);
void enqueue(Queue *queue, Node *node);
Node *dequeue(Queue *queue);
int isEmpty(Queue *queue);
void freeQueue(Queue *queue);

typedef struct TREE
{
    Node *root;
    int size;
} TREE;

void initTREE(TREE *tree);
Node *createNode(int value);
void insert(TREE *tree, int data);
void delete (TREE *tree);
Node *__search(Node *root, int key);
Node *search(TREE *tree, int key);
void levelOrder(TREE *tree);
void __preOrder(Node *root);
void __inOrder(Node *root);
void __postOrder(Node *root);
void preOrder(TREE *tree);
void inOrder(TREE *tree);
void postOrder(TREE *tree);
int __height(Node *root);
int TREE_Height(TREE *tree);
int TREE_Size(TREE *tree);