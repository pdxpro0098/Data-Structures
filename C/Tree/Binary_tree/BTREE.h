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
    Node *queue[100];
} Queue;

void initQueue(Queue *queue);
void enqueue(Queue *queue, Node *node);
Node *dequeue(Queue *queue);
int isEmpty(Queue *queue);
void freeQueue(Queue *queue);

typedef struct BTREE
{
    Node *root;
    int size;
    int height;
} BTREE;

void initBTREE(BTREE *tree);
Node *createNode(int value);
void insert(BTREE *tree, int data);
void delete(BTREE *tree);
Node *search(int key);
void preOrder(BTREE *tree);
void inOrder(BTREE *tree);
void postOrder(BTREE *tree);
int getHeight(BTREE *tree);
int getSize(BTREE *tree);