#include "CLL.hpp"

int main()
{
    CLIST lst;
    lst.push_front(12);
    lst.push_front(13);
    lst.push_front(14);
    lst.push_front(15);
    lst.push_front(16);

    printList(lst);
    return 0;
}
