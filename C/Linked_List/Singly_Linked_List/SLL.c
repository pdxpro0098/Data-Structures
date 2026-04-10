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

int List_size(List *list)
{
    return list->size;
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
        list->listHead = newNode;

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

void insertAt(List *list, int index, int value)
{
    if (list->listHead == NULL || index <= 0)
    {
        insertHead(list, value);
        return;
    }

    if (index >= list->size)
    {
        insertTail(list, value);
        return;
    }

    Node *temp = list->listHead;
    for (int i = 0; i < index - 1; i++)
    {
        temp = temp->next;
    }

    Node *newNode = createNode(value);
    newNode->next = temp->next;

    temp->next = newNode;
    list->size++;
}

void deleteAt(List *list, int index)
{
    if (list->listHead == NULL)
        return;

    if (index <= 0)
    {
        deleteHead(list);
        return;
    }

    if (index >= list->size - 1)
    {
        deleteTail(list);
        return;
    }

    Node *temp = list->listHead;
    for (int i = 0; i < index - 1; i++)
    {
        temp = temp->next;
    }

    Node *toDelete = temp->next;
    temp->next = toDelete->next;
    free(toDelete);
    list->size--;
}