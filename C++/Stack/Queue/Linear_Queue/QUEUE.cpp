#include "QUEUE.hpp"

QUEUE::QUEUE()
{
    front = -1;
    rear = -1;
    length = 0;
    capacity = 10;
    array = new int[capacity];
}

QUEUE::QUEUE(int size)
{
    front = -1;
    rear = -1;
    length = 0;
    capacity = size;
    array = new int[size];
}

int QUEUE::peek()
{
    if (isEmpty())
    {
        std::cout << "Queue is Empty";
        return 0;
    }

    return array[front];
}

void QUEUE::enqueue(int value)
{
}

void QUEUE::dequeue()
{
}

int QUEUE::size()
{
    return length;
}

bool QUEUE::isEmpty()
{
    return length == 0;
}

QUEUE::~QUEUE()
{
    delete[] array;
}
