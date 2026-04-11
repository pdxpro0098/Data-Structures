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
        return;
    }
    Node *temp = list->tail;
    list->tail = list->tail->prev;
    list->tail->next = NULL;
    free(temp);
    list->size--;
}

void insertAt(DList *list, int index, int value)
{
    if (list->head == NULL)
        return;
    if (index <= 0)
    {
        insertHead(list, value);
        return;
    }
    if (index >= list->size)
    {
        insertTail(list, value);
        return;
    }
    Node *newNode = createNode(value);
    Node *temp = list->head;
    for (int i = 0; i < index; i++)
    {
        temp = temp->next;
    }
    newNode->prev = temp->prev;
    newNode->next = temp;
    temp->prev->next = newNode;
    temp->prev = newNode;
    list->size++;
}

void deleteAt(DList *list, int index)
{
    if (list->head == NULL)
        return;
    if (index <= 0)
    {
        deleteHead(list);
        return;
    }
    if (index >= list->size)
    {
        deleteTail(list);
        return;
    }
    Node *temp = list->head;
    for (int i = 0; i < index; i++)
    {
        temp = temp->next;
    }
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    list->size--;
}