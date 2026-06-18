#include "LL.hpp"

int main()
{

    LLIST l(99);
    l.push_front(12);
    l.push_front(14);
    l.push_front(15);
    l.push_front(16);
    l.push_front(17);
    // l.push_back(88);

    // while (l.head != nullptr)
    // {
    //     std::cout << l.head->data << std::endl;
    //     l.head = l.head->next;
    // }
    std::cout << l.back();
    return 0;
}
