#include "SLL.h"
#include "../LL_Function.c"
#include <stdio.h>

int main()
{
    List *lst = (List *)malloc(sizeof(List));
    List_init(lst);
    insertHead(lst, 12);
    insertHead(lst, 1);
    insertHead(lst, 4);
    insertHead(lst, 114);
    insertTail(lst, 99);
    insertTail(lst, 999);
    insertTail(lst, 9999);
    printList(lst);
    return 0;
}
