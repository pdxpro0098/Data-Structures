#include "ARRAY.hpp"

ARRAY::ARRAY(int initialSize)
{
    length = 0;
    capacity = initialSize;
    array = new int[capacity];
}

ARRAY::ARRAY()
{
    length = 0;
    capacity = 2;
    array = new int[capacity];
}

void ARRAY::resize()
{
    int *temp = array;
    capacity += 2;
    array = new int[capacity + 2];
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
    if (length == capacity)
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
    if (length == capacity)
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

int ARRAY::at(int index)
{
    if (index < 0)
    {
        std::cout << "Invalid index";
    }

    return array[index];
}

bool ARRAY::empty()
{
    return length == 0;
}

int ARRAY::size()
{
    return length;
}

int ARRAY::max_size()
{
    return capacity;
}
