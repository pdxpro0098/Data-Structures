#include "Binary_Tree.h"

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

void initTREE(TREE *root)
{
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

void insert(TREE *tree, int data)
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

void delete(TREE *tree)
{
    if (tree == NULL || tree->root == NULL)
        return;

    Queue *queue = (Queue *)malloc(sizeof(Queue));
    initQueue(queue);

    enqueue(queue, tree->root);

    Node *temp = NULL;
    Node *parent = NULL;

    while (!isEmpty(queue))
    {
        temp = dequeue(queue);

        if (temp->left)
        {
            parent = temp;
            enqueue(queue, temp->left);
        }

        if (temp->right)
        {
            parent = temp;
            enqueue(queue, temp->right);
        }
    }

    if (temp == tree->root)
    {
        free(tree->root);
        tree->root = NULL;
        tree->size = 0;
        freeQueue(queue);
        return;
    }

    if (parent->right == temp)
    {
        parent->right = NULL;
    }
    else if (parent->left == temp)
    {
        parent->left = NULL;
    }

    free(temp);
    tree->size--;

    freeQueue(queue);
}

Node *__search(Node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    Node *temp = root;
    if (temp->data == key)
    {
        return temp;
    }

    Node *leftRes = __search(root->left, key);
    if (leftRes != NULL)
    {
        return leftRes;
    }

    return __search(root->right, key);
}

Node *search(TREE *tree, int key)
{
    return __search(tree->root, key);
}

void __preOrder(Node *root)
{
    if (root == NULL)
        return;
    printf("%d ", root->data);
    __preOrder(root->left);
    __preOrder(root->right);
}

void preOrder(TREE *tree)
{
    if (tree != NULL && tree->root != NULL)
    {
        __preOrder(tree->root);
        printf("\n");
    }
}

void __inOrder(Node *root)
{
    if (root == NULL)
        return;
    __inOrder(root->left);
    printf("%d ", root->data);
    __inOrder(root->right);
}

void inOrder(TREE *tree)
{
    if (tree != NULL && tree->root != NULL)
    {
        __inOrder(tree->root);
        printf("\n");
    }
}

void __postOrder(Node *root)
{
    if (root == NULL)
        return;
    __postOrder(root->left);
    __postOrder(root->right);
    printf("%d ", root->data);
}

void postOrder(TREE *tree)
{
    if (tree != NULL && tree->root != NULL)
    {
        __postOrder(tree->root);
        printf("\n");
    }
}

int __height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int leftHeight = __height(root->left);
    int rightHeight = __height(root->right);
    return MAX(leftHeight, rightHeight) + 1;
}

int TREE_Height(TREE *tree)
{
    return __height(tree->root);
}

int TREE_Size(TREE *tree)
{
    return tree->size;
}