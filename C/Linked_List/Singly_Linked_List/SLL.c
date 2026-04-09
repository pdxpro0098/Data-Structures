#include "SLL.h"

Node *createNode(int value)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

void List_init(List *list)
{
    list->size = 0;
    list->listHead = NULL;
}

void insertHead(List *list, int value)
{
    Node *newNode = createNode(value);
    newNode->next = list->listHead;
    list->listHead = newNode;
    list->size++;
}

void deleteHead(List *list)
{
}

void insertTail(List *list, int value)
{
}

void deleteTail(List *list)
{
}