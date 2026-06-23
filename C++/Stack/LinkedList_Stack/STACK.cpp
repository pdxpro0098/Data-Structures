#include "STACK.hpp"

STACK::Node::Node()
{
    this->data = 0;
    this->next = nullptr;
}

STACK::Node *STACK::Node::create_node(int value)
{
    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;
    return newNode;
}

STACK::STACK()
{
    this->head = nullptr;
    this->length = 0;
}

STACK::STACK(int value)
{
    this->head = Node::create_node(value);
    this->length = 1;
}