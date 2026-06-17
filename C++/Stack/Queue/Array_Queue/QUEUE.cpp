#include "QUEUE.hpp"

class QUEUE
{
private:
    int front;
    int rear;
    int length;
    int capacity;
    void resize();

public:
    int *array;
    QUEUE();
    QUEUE(int);
    int peek();
    int back();
    void enqueue(int);
    void dequeue();
    int size();
    bool isEmpty();
};

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

int QUEUE::back()
{
    if (isEmpty())
    {
        std::cout << "Queue is Empty";
        return 0;
    }
    return array[rear];
}

void QUEUE::enqueue(int value)
{
    if (length == capacity)
    {
        resize();
    }

    if (front == -1 && rear == -1)
    {
        front++;
        rear++;
    }
    else
    {
        rear = (rear + 1) % capacity;
    }
    length++;
    array[rear] = value;
}

void QUEUE::dequeue()
{
    if (isEmpty())
    {
        return;
    }
    front = (front + 1) % capacity;
    length--;
}

int QUEUE::size()
{
    return length;
}

bool QUEUE::isEmpty()
{
    return length == 0;
}

void QUEUE::resize()
{
}