#include "SLL.h"
#include <stdio.h>

void List_init(List *list)
{
    list->size = 0;
    list->head = NULL;
}

int List_size(List *list)
{
    return list->size;
}

void insertHead(List *list, int value)
{
    Node *newNode = createNode(value);
    newNode->next = list->head;
    list->head = newNode;
    list->size++;
}

void deleteHead(List *list)
{
    if (list->head == NULL)
        return;

    Node *temp = list->head;
    list->head = list->head->next;
    free(temp);
    list->size--;
}

void insertTail(List *list, int value)
{
    Node *newNode = createNode(value);

    if (list->head == NULL)
        list->head = newNode;

    Node *temp = list->head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    list->size++;
}

void deleteTail(List *list)
{
    if (list->head == NULL)
    {
        return;
    }

    Node *temp = list->head;

    if (temp->next == NULL)
    {
        free(temp);
        list->head = NULL;
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
    if (list->head == NULL || index <= 0)
    {
        insertHead(list, value);
        return;
    }

    if (index >= list->size)
    {
        insertTail(list, value);
        return;
    }

    Node *temp = list->head;
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
    if (list->head == NULL)
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

    Node *temp = list->head;
    for (int i = 0; i < index - 1; i++)
    {
        temp = temp->next;
    }

    Node *toDelete = temp->next;
    temp->next = toDelete->next;
    free(toDelete);
    list->size--;
}

void printList(List *list)
{
    Node *temp = list->head;

    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL");
}