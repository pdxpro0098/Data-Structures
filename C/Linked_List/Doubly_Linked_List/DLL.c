#include "DLL.h"

void DList_init(DList *list)
{
    list->size = 0;
    list->listHead = NULL;
}

Node *createNode(int value)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->next = NULL;
    newNode->prev = NULL;
    newNode->data = value;
    return newNode;
}

void insertHead(DList *list, int value)
{
}

void deleteHead(DList *list)
{
}

void insertTail(DList *list, int value)
{
}

void deleteTail(DList *list)
{
}

void insertAt(DList *list, int index, int value)
{
}

void deleteAt(DList *list, int index)
{
}

int DList_size(DList *list)
{
    return 0;
}