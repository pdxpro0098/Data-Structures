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

void initBTREE(BTREE *root)
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

Node *SEARCH(Node *root, int key)
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

    Node *leftRes = SEARCH(root->left, key);
    if (leftRes != NULL)
    {
        return leftRes;
    }

    return SEARCH(root->right, key);
}

Node *search(BTREE *tree, int key)
{
    return SEARCH(tree->root, key);
}

void PREORDER(Node *root)
{
    if (root == NULL)
        return;
    printf("%d ", root->data);
    PREORDER(root->left);
    PREORDER(root->right);
}

void preOrder(BTREE *tree)
{
    if (tree != NULL && tree->root != NULL)
    {
        PREORDER(tree->root);
        printf("\n");
    }
}

void INORDER(Node *root)
{
    if (root == NULL)
        return;
    INORDER(root->left);
    printf("%d ", root->data);
    INORDER(root->right);
}

void inOrder(BTREE *tree)
{
    if (tree != NULL && tree->root != NULL)
    {
        INORDER(tree->root);
        printf("\n");
    }
}

void POSTORDER(Node *root)
{
    if (root == NULL)
        return;
    POSTORDER(root->left);
    POSTORDER(root->right);
    printf("%d ", root->data);
}

void postOrder(BTREE *tree)
{
    if (tree != NULL && tree->root != NULL)
    {
        POSTORDER(tree->root);
        printf("\n");
    }
}

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

int BTREE_Height(BTREE *tree)
{
    return HEIGHT(tree->root);
}

int BTREE_Size(BTREE *tree)
{
    return tree->size;
}