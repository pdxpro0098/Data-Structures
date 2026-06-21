#include "DCLL.hpp"

int main()
{
    DCLIST lst;
    lst.push_back(1);
    lst.push_back(2);
    lst.push_back(3);
    lst.push_back(4);
    lst.push_back(5);
    printForword(lst);
    // printBackword(lst);
    return 0;
}
