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

void STACK::push(int value)
{
    Node *newNode = Node::create_node(value);
    if (this->empty())
    {
        this->head = newNode;
    }
    else
    {
        newNode->next = this->head;
        this->head = newNode;
    }
    this->length++;
}

void STACK::pop()
{
    if (this->empty())
    {
        return;
    }
    else if (this->length == 1)
    {
        delete (this->head);
        this->head = nullptr;
    }
    else
    {
        Node *toDelete = this->head;
        this->head = this->head->next;
        delete (toDelete);
    }
    this->length--;
}