#include "Array_Stack.hpp"

STACK::STACK()
{
    array = new int[2];
    Top = -1;
    length = 0;
    capacity = 2;
}

void STACK::resize()
{
    int *temp = array;
    capacity += 2;
    array = new int[capacity];
    for (int i = 0; i < length; i++)
    {
        array[i] = temp[i];
    }

    delete[] temp;
}

int STACK::top()
{
    return array[Top];
}

int STACK::size()
{
    return length;
}

void STACK::push(int value)
{
    if (length == capacity)
    {
        resize();
    }

    array[++Top] = value;
    length++;
}

void STACK::pop()
{
    if (!empty())
    {
        Top--;
        length--;
    }
}

bool STACK::empty()
{
    return length == 0;
}
