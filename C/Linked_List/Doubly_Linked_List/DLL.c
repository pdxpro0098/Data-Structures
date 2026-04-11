#include "DLL.h"

void DList_init(DList *list)
{
    list->size = 0;
    list->head = NULL;
    list->tail = NULL;
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

    if (list->head == NULL)
    {
        list->head = newNode;
        list->tail = newNode;
    }
    else
    {
        newNode->next = list->head;
        list->head->prev = newNode;
        list->head = newNode;
    }

    list->size++;
}

void deleteHead(DList *list)
{
    if (list->head == NULL)
    {
        return;
    }

    if (list->head->next == NULL)
    {
        free(list->head);
        list->head = NULL;
        list->tail = NULL;
        list->size--;
        return;
    }

    Node *temp = list->head;
    list->head = list->head->next;
    list->head->prev = NULL;
    free(temp);
    list->size--;
}

void insertTail(DList *list, int value)
{
    Node *newNode = createNode(value);
    if (list->tail == NULL)
    {
        list->head = newNode;
        list->tail = newNode;
    }
    else
    {
        newNode->prev = list->tail;
        list->tail->next = newNode;
        list->tail = newNode;
    }
    list->size++;
}

void deleteTail(DList *list)
{
    if (list->tail == NULL)
        return;

    if (list->tail->prev == NULL)
    {
        free(list->tail);
        list->tail = NULL;
        list->head = NULL;
        list->size--;
        return;
    }

    Node *temp = list->tail;
    list->tail = list->tail->prev;
    list->tail->next = NULL;
    free(temp);
    list->size--;
}

