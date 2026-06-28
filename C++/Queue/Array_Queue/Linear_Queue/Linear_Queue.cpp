#include "Linear_Queue.hpp"

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
    if (isFull())
    {
        std::cout << "Queue is full";
        return;
    }

    if (isEmpty())
    {
        front++;
    }

    rear++;
    length++;
    array[rear] = value;
}

void QUEUE::dequeue()
{
    if (isEmpty())
    {
        std::cout << "Queue is empty";
    }
    else
    {
        front++;
        length--;
    }
}

int QUEUE::size()
{
    return length;
}

bool QUEUE::isEmpty()
{
    return length == 0;
}

bool QUEUE::isFull()
{
    return capacity == rear - 1;
}

QUEUE::~QUEUE()
{
    delete[] array;
}
