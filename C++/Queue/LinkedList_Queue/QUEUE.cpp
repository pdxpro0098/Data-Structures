#include "QUEUE.hpp"

QUEUE::Node::Node()
{
    this->next = nullptr;
    this->data = 0;
}

QUEUE::Node *QUEUE::Node::create_node(int value)
{
    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;
    return newNode;
};

QUEUE::QUEUE()
{
    this->front = this->rear = nullptr;
    this->length = 0;
}

QUEUE::QUEUE(int value)
{
    this->front = this->rear = Node::create_node(value);
    this->length = 1;
}

void QUEUE::enqueue(int value)
{
    Node *newNode = Node::create_node(value);

    if (this->length == 0)
    {
        this->front = this->rear = newNode;
    }
    else
    {
        this->rear->next = newNode;
        this->rear = newNode;
    }
    this->length++;
}

void QUEUE::dequeue()
{
    if (this->length == 0)
    {
        return;
    }
    else if (this->length == 1)
    {
        delete (this->front);
        this->front = this->rear = nullptr;
    }
    else
    {
        Node *toDelete = this->front;
        this->front = this->front->next;
        delete (toDelete);
    }
    this->length--;
}
