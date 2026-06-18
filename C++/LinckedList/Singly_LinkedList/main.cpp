#include "LL.hpp"

int main()
{

    LLIST l;
    l.push_front(10);
    l.push_front(11);
    l.push_front(12);
    l.push_front(14);
    l.push_front(15);
    l.push_front(16);
    l.push_front(17);

    l.insert_at(99, 23);
    printList(l);
    return 0;
}
