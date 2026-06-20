#include "CLL.hpp"

CLIST::Node::Node()
{
    this->data = 0;
    this->next = nullptr;
};

CLIST::Node *CLIST::Node::create_node(int value)
{
    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;
    return newNode;
};

CLIST::CLIST()
{
    this->head = nullptr;
    this->tail = nullptr;
    this->length = 0;
}

CLIST::CLIST(int value)
{
    this->head = Node::create_node(value);
    this->tail = head;
    this->length = 1;
}
