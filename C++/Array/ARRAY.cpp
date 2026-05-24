#include "ARRAY.hpp"

ARRAY::ARRAY(int initialSize)
{
    length = 0;
    size = initialSize;
    array = new int[size];
};

ARRAY::ARRAY()
{
    length = 0;
    size = 2;
    array = new int[size];
};

void ARRAY::resize()
{
    int *temp = array;
    size += 2;
    array = new int[size + 2];
    for (int i = 0; i < length; i++)
    {
        array[i] = temp[i];
    }

    delete[] temp;
}

void ARRAY::printArray()
{
    for (int i = 0; i < length; i++)
    {
        std::cout << array[i] << std::endl;
    }
}

void ARRAY::push_front(int value)
{
    if (length == size)
    {
        resize();
    }

    for (int i = length; i >= 0; i--)
    {
        array[i] = array[i - 1];
    }

    array[0] = value;
    length++;
}

void ARRAY::pop_front()
{
    if (length > 0)
    {
        for (int i = 0; i < length; i++)
        {
            array[i] = array[i + 1];
        }
        length--;
    }
}

void ARRAY::push_back(int value)
{
    if (length == size)
    {
        resize();
    }

    array[length] = value;
    length++;
}

void ARRAY::pop_back()
{
    if (length > 0)
    {
        length--;
    }
}
