#include "SLL.h"
#include <stdio.h>

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
    if (list->listHead == NULL)
        return;

    Node *temp = list->listHead;
    list->listHead = list->listHead->next;
    free(temp);
    list->size--;
}

void insertTail(List *list, int value)
{
    Node *newNode = createNode(value);

    if (list->listHead == NULL)
        list->listHead = createNode(value);

    Node *temp = list->listHead;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    list->size++;
}

void deleteTail(List *list)
{
    if (list->listHead == NULL)
    {
        return;
    }

    Node *temp = list->listHead;

    if (temp->next == NULL)
    {
        free(temp);
        list->listHead = NULL;
        list->size--;
        return;
    }

    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    
    free(temp->next);
    temp->next = NULL;
    list->size--;
}

void insertAt(List *list)
{
}

void deleteAt(List *list)
{
}
