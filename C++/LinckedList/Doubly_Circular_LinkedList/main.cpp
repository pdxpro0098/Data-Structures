#include "DCLL.hpp"

int main()
{
    DCLIST lst;
    lst.push_front(1);
    lst.push_front(2);
    lst.push_front(3);
    lst.push_front(4);
    lst.push_front(5);
    printForword(lst);
    // printBackword(lst);
    return 0;
}
