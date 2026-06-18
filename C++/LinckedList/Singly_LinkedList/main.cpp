#include "LL.hpp"

int main()
{

    LLIST l;
    l.push_front(12);
    l.push_front(14);
    l.push_front(15);
    l.push_front(16);
    l.push_front(17);

    while (l.head != nullptr)
    {
        std::cout << l.front() << std::endl;
        l.head = l.head->next;
    }

    return 0;
}
