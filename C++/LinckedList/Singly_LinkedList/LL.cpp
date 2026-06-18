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
LLIST::LLIST(int data)
{
    this->head = Node::create_node(data);
}

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

void LLIST::push_back(int value)
{
    Node *newNode = Node::create_node(value);

    Node *temp = this->head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    this->length++;
}

int LLIST::front()
{
    return this->head->data;
}

int LLIST::back()
{
    Node *temp = this->head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    return temp->data;
}

int LLIST::size()
{
    return this->length;
}

int LLIST::is_empty()
{
    return this->length == 0;
}
