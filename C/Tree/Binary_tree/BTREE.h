#include <stdio.h>
#include <stdlib.h>

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
    Node *queue[];
} Queue;

void initQueue(Queue *queue);
void push(Queue *queue, Node *node);
void pop(Queue *queue);
void isEmpty(Queue *queue);

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