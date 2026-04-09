#include <stdio.h>
#include "Singly_Linked_List/SLL.h"

void printList(List *lst)
{
    Node *temp = lst->listHead;

    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL");
}