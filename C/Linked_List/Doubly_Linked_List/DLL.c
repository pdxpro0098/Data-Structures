#include "DLL.h"

void DList_init(DList *list)
{
    list->size = 0;
    list->listHead = NULL;
    list->listTail = NULL;
}

Node *createNode(int value)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->next = NULL;
    newNode->prev = NULL;
    newNode->data = value;
    return newNode;
}

int DList_size(DList *list)
{
    return list->size;
}

void insertHead(DList *list, int value)
{
    Node *newNode = createNode(value);

    if (list->listHead == NULL)
    {
        list->listHead = newNode;
        list->listTail = newNode;
    }
    else
    {
        newNode->next = list->listHead;
        list->listHead->prev = newNode;
        list->listHead = newNode;
    }

    list->size++;
}

void deleteHead(DList *list)
{
    if (list->listHead->next == NULL)
    {
        free(list->listHead);
        list->listHead = NULL;
    }

    Node *temp = list->listHead;
    list->listHead = list->listHead->next;
    free(temp);
    list->size--;
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