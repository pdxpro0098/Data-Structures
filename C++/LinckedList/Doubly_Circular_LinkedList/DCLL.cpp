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

void DCLIST::push_front(int value)
{
    Node *newNode = Node::create_node(value);
    if (this->head == nullptr)
    {
        this->head = this->tail = newNode;
        newNode->next = newNode;
        newNode->prev = newNode;
    }
    else
    {
        newNode->next = this->head;
        newNode->prev = this->tail;
        this->head->prev = newNode;
        this->tail->next = newNode;
        this->head = newNode;
    }

    this->length++;
}

void DCLIST::push_back(int value)
{
    Node *newNode = Node::create_node(value);
    if (this->head == nullptr)
    {
        this->head = this->tail = newNode;
        newNode->next = newNode;
        newNode->prev = newNode;
    }
    else
    {
        newNode->next = this->head;
        newNode->prev = this->tail;
        this->head->prev = newNode;
        this->tail->next = newNode;
        this->tail = newNode;
    }

    this->length++;
}

void DCLIST::pop_front()
{
    if (this->head == nullptr)
    {
        return;
    }

    if (this->head == this->tail)
    {
        delete (this->head);
        this->head = this->tail = nullptr;
    }
    else
    {
        this->head = this->head->next;
        this->head->prev = this->tail;
        delete (this->tail->next);
        this->tail->next = this->head;
    }
    this->length--;
}

void DCLIST::pop_back()
{
    if (this->head == nullptr)
    {
        return;
    }

    if (this->head == this->tail)
    {
        delete (this->head);
        this->head = this->tail = nullptr;
    }
    else
    {
        this->tail = this->tail->prev;
        this->head->prev = this->tail;
        delete (this->tail->next);
        this->tail->next = this->head;
    }
    this->length--;
}

int DCLIST::front()
{
    return this->head->data;
}

int DCLIST::back()
{
    return this->tail->data;
}

int DCLIST::size()
{
    return this->length;
}

int DCLIST::is_empty()
{
    return this->length == 0;
}

void printForword(DCLIST list)
{
    DCLIST::Node *temp = list.head;
    for (int i = 1; i <= list.length; i++)
    {
        std::cout << temp->data << "->";
        temp = temp->next;
    }
}

void printBackword(DCLIST list)
{
    DCLIST::Node *temp = list.tail;
    for (int i = list.length; i > 0; i--)
    {
        std::cout << temp->data << "->";
        temp = temp->prev;
    }
}