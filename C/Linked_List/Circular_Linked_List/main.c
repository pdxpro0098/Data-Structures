#include "CLL.h"

int main()
{
    CList *lst = (CList *)malloc(sizeof(CList));

    CList_init(lst);
    insertHead(lst, 1);
    insertHead(lst, 11);
    insertHead(lst, 111);
    insertHead(lst, 1111);
    deleteHead(lst);
    printCList(lst);

    return 0;
}