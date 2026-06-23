#include "CLL.hpp"

int main()
{
    CLIST lst;
    lst.push_back(12);
    lst.push_back(13);
    lst.push_back(14);
    lst.push_back(15);
    lst.push_back(16);
    lst.pop_front();
    lst.pop_front();
    // std::cout << lst.head->data;
    // lst.pop_back();
    lst.pop_back();
    printList(lst);
    return 0;
}
