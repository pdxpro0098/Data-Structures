#include "CLL.h"
#include <stdio.h>

Node *createNode(int value)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->next = NULL;
    newNode->data = value;
    return newNode;
}

void CList_init(CList *list)
{
    list->head = NULL;
    list->size = 0;
}

int CList_size(CList *list)
{
    return list->size;
}

void insertHead(CList *list, int value)
{
    Node *newNode = createNode(value);
    if (list->head == NULL)
    {
        list->head = newNode;
        newNode->next = list->head;
    }
    else
    {
        Node *temp = list->head;
        while (temp->next != list->head)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = list->head;
        list->head = newNode;
    }
    list->size++;
}

void deleteHead(CList *list)
{
}

void insertTail(CList *list, int value)
{
    Node *newNode = createNode(value);
    if (list->head == NULL)
    {
        list->head = newNode;
        newNode->next = list->head;
    }
    else
    {
        Node *temp = list->head;
        while (temp->next != list->head)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = list->head;
    }
    list->size++;
}

void deleteTail(CList *list)
{
}

void insertAt(CList *list, int index, int value)
{
}

void deleteAt(CList *list, int index)
{
}
