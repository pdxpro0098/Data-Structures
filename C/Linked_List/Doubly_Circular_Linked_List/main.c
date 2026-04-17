#include "DCLL.h"

int main(int argc, char const *argv[])
{
    DCLL *lst = (DCLL *)malloc(sizeof(DCLL));
    DCLL_init(lst);
    insertTail(lst, 12);
    insertTail(lst, 13);
    insertTail(lst, 14);
    insertTail(lst, 15);
    insertTail(lst, 16);
    printDCList(lst);
    // printDCListReverse(lst);
    return 0;
}
