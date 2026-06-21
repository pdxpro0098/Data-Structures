#include "DCLL.hpp"

DCLIST::Node::Node()
{
    this->data = 0;
    this->next = this->prev = nullptr;
}
DCLIST::Node *DCLIST::Node::create_node(int value)
{
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = newNode->prev = nullptr;
    return newNode;
}

DCLIST::DCLIST()
{
    this->length = 0;
    this->head = this->tail = nullptr;
}

DCLIST::DCLIST(int value)
{
    this->head = this->tail = Node::create_node(value);
    this->length++;
}