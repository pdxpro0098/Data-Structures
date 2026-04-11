#include <stdio.h>
#include "DLL.h"
#include "../LL_Function.c"

int main()
{
    DList *lst = (DList *)malloc(sizeof(DList));
    DList_init(lst);
    insertHead(lst, 1);
    insertHead(lst, 2);
    insertHead(lst, 3);
    insertHead(lst, 4);
    insertHead(lst, 5);
    insertHead(lst, 6);
    insertHead(lst, 7);
    insertHead(lst, 8);
    insertHead(lst, 9);
    deleteHead(lst);
    // deleteHead(lst);
    // printListReverse(lst);
    printList(lst);
    return 0;
}
