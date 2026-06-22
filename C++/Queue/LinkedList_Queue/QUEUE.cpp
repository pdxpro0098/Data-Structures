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