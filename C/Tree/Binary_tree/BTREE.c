#include "BTREE.h"

/*Queue Function */
void initQueue(Queue *queue)
{
    queue->size = 0;
    queue->front = -1;
    queue->rear = -1;
    queue->capacity = 100;
}

void enqueue(Queue *queue, Node *node)
{
    if (queue->size >= 100)
        return;

    if (isEmpty(queue))
    {
        queue->front = 0;
        queue->rear = 0;
    }
    else
    {
        queue->rear++;
    }
    queue->queue[queue->rear] = node;
    queue->size++;
}

Node *dequeue(Queue *queue)
{
    if (isEmpty(queue))
        return NULL;

    Node *node = queue->queue[queue->front];
    queue->front++;
    queue->size--;
    return node;
}

int isEmpty(Queue *queue)
{
    return queue->size == 0;
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
    return newNode;
}

void insert(BTREE *tree, int data)
{
    Node *newNode = createNode(data);

    if (tree->root == NULL)
    {
        tree->root = newNode;
        tree->size++;
        return;
    }

    Queue *queue = (Queue *)malloc(sizeof(Queue));
    initQueue(queue);

    enqueue(queue, tree->root);

    while (!isEmpty(queue))
    {
        Node *temp = dequeue(queue);

        if (temp->left == NULL)
        {
            temp->left = newNode;
            break;
        }
        else
        {
            enqueue(queue, temp->left);
        }

        if (temp->right == NULL)
        {
            temp->right = newNode;
            break;
        }
        else
        {
            enqueue(queue, temp->right);
        }
    }

    tree->size++;
    freeQueue(queue);
}

void delete(BTREE *tree)
{
}

Node *search(int key) {}

void PREORDER_RECURSIVE(Node *root)
{
    if (root == NULL)
        return;
    printf("%d ", root->data);
    PREORDER_RECURSIVE(root->left);
    PREORDER_RECURSIVE(root->right);
}

void preOrder(BTREE *tree)
{
    if (tree != NULL && tree->root != NULL)
    {
        PREORDER_RECURSIVE(tree->root);
        printf("\n");
    }
}

void inOrder(BTREE *tree) {}

void postOrder(BTREE *tree) {}

int getHeight(BTREE *tree)
{
    return tree->height;
}

int getSize(BTREE *tree)
{
    return tree->size;
}