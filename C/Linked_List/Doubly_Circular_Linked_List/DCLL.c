#include "DCLL.h"

void DCLL_init(DCLL *list)
{
    list->size = 0;
    list->head = NULL;
    list->tail = NULL;
}

int DCLL_size(DCLL *list)
{
    return list->size;
}

Node *createNode(int value)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

void insertHead(DCLL *list, int value)
{
    Node *newNode = createNode(value);
    if (list->head == NULL)
    {
        list->head = newNode;
        list->tail = newNode;
        newNode->next = list->head;
        newNode->prev = list->head;
    }
    else
    {
        newNode->next = list->head;
        newNode->prev = list->tail;

        list->head->prev = newNode;
        list->tail->next = newNode;

        list->head = newNode;
    }
    list->size++;
}

void insertTail(DCLL *list, int value)
{
    Node *newNode = createNode(value);
    if (list->head == NULL)
    {
        list->head = newNode;
        list->tail = newNode;
        newNode->next = list->head;
        newNode->prev = list->head;
    }
    else
    {
        newNode->next = list->head;
        newNode->prev = list->tail;

        list->head->prev = newNode;
        list->tail->next = newNode;

        list->tail = newNode;
    }
    list->size++;
}

void deleteHead(DCLL *list)
{
    if (list->head == NULL)
        return;

    Node *toDelete = list->head;
    if (list->head->next == list->head)
    {
        free(toDelete);
        list->head = NULL;
        list->tail = NULL;
    }
    else
    {
        list->head = list->head->next;
        list->head->prev = list->tail;
        list->tail->next = list->head;
        free(toDelete);
    }
    list->size--;
}

void deleteTail(DCLL *list)
{
    if (list->tail == NULL)
        return;

    Node *toDelete = list->tail;
    if (list->head == list->tail)
    {
        free(toDelete);
        list->head = NULL;
        list->tail = NULL;
    }
    else
    {
        list->tail = list->tail->prev;
        list->tail->next = list->head;
        list->head->prev = list->tail;
        free(toDelete);
    }
    list->size--;
}

void insertAt(DCLL *list, int index, int value)
{
    if (index <= 0)
    {
        insertHead(list, value);
    }
    else if (index >= list->size)
    {
        insertTail(list, value);
    }
    else
    {
        Node *temp = list->head;
        for (int i = 0; i < index; i++)
        {
            temp = temp->next;
        }
        Node *newNode = createNode(value);
        newNode->next = temp;
        newNode->prev = temp->prev;
        temp->prev->next = newNode;
        temp->prev = newNode;
        list->size++;
    }
}

void deleteAt(DCLL *list, int index)
{

    if (index == 0)
    {
        deleteHead(list);
    }
    else if (index == list->size - 1)
    {
        deleteTail(list);
    }
    else
    {
        Node *toDelete = list->head;
        for (int i = 0; i < index; i++)
        {
            toDelete = toDelete->next;
        }
        toDelete->prev->next = toDelete->next;
        toDelete->next->prev = toDelete->prev;
        free(toDelete);
        list->size--;
    }
}

void printDCList(DCLL *list)
{
    Node *temp = list->head;

    do
    {
        printf("%d->", temp->data);
        temp = temp->next;
    } while (temp != list->head);
    printf("NULL");
}

void printDCListReverse(DCLL *list)
{
    Node *temp = list->tail;

    do
    {
        printf("%d->", temp->data);
        temp = temp->prev;
    } while (temp != list->tail);
    printf("NULL");
}