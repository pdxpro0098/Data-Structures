#include "CLL.h"

int main()
{
    CList *lst = (CList *)malloc(sizeof(CList));

    CList_init(lst);
    insertHead(lst, 1);
    insertHead(lst, 2);
    insertHead(lst, 3);
    insertHead(lst, 4);
    insertHead(lst, 5);
    insertTail(lst, 99);
    printCList(lst);

    return 0;
}
