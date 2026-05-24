#include "ARRAY.hpp"

int main()
{
    ARRAY a;

    a.push_front(1);
    a.push_front(2);
    a.push_front(3);
    a.push_front(4);
    a.push_front(5);
    a.pop_front();
    a.pop_front();
    a.printArray();

    return 0;
}
