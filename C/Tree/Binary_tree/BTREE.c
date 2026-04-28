#include "BTREE.h"

/*Queue Function */
void initQueue(Queue *queue)
{
    queue->size = 0;
    queue->front = -1;
    queue->rear = -1;
    queue->capacity = 100;
    queue->queue[queue->capacity];
}

void push(Queue *queue, Node *node)
{
    if (isEmpty(queue))
    {
        queue->front++;
        queue->rear++;
    }
    else
    {
        queue->rear++;
    }
    queue->queue[queue->rear] = node;
    queue->size++;
}

Node *pop(Queue *queue)
{
    if (isEmpty(queue))
    {
        return NULL;
    }
    queue->front++;
    return queue->queue[queue->front];
}

int isEmpty(Queue *queue)
{
    return queue->size <= queue->capacity;
}

void freeQueue(Queue *queue)
{
    free(queue);
}

/*Binary Tree Function */

void initBTREE(BTREE *root)
{
    root->height = 0;
    root->size = 0;
    root->root = NULL;
}

Node *createNode(int value)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
}

void addChild(BTREE *root, Node *child)
{
    if (root->size == 0)
    {
        root->root = child;
        root->size++;
        root->height++;
        return;
    }
}

void removeChild(BTREE *root)
{
}

Node *search(int key) {}

void *preOrder(BTREE *root) {}

void *inOrder(BTREE *root) {}

void *postOrder(BTREE *root) {}

int getHeight(BTREE *root)
{
    return root->height;
}

int getSize(BTREE *root)
{
    return root->size;
}