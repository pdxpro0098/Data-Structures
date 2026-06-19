#include "DLL.hpp"

DLLIST::Node::Node()
{
    this->data = 0;
    this->next = nullptr;
    this->prev = nullptr;
}

DLLIST::Node *DLLIST::Node::create_node(int value)
{
    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;
    newNode->prev = nullptr;
    return newNode;
}
