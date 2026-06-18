#include "LL.hpp"

LLIST::Node::Node() {};
LLIST::Node *LLIST::Node::create_node(int value)
{
    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;
    return newNode;
};

LLIST::LLIST() {}
LLIST::LLIST(int data) {}

void LLIST::push_front(int value)
{
    Node *newNode = Node::create_node(value);

    if (this->head == nullptr)
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

int LLIST::front()
{
    return this->head->data;
}
