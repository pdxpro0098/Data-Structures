#include "STACK.hpp"

STACK::STACK()
{
    array = new int[2];
    Top = -1;
    length = 0;
    capacity = 2;
}

void STACK::resize()
{
}

int STACK::top()
{
    return array[Top];
}

int STACK::size()
{
    return length;
}

void STACK::push(int)
{
}

void STACK::pop()
{
}

bool STACK::empty()
{
    return length == 0;
}
