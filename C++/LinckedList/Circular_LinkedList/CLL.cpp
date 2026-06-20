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
    this->head = this->tail = nullptr;
    this->length = 0;
}

CLIST::CLIST(int value)
{
    this->head = Node::create_node(value);
    this->tail = head;
    this->length = 1;
}

void CLIST::push_front(int value)
{
    Node *newNode = Node::create_node(value);

    if (this->head == nullptr)
    {
        this->head = this->tail = newNode;
    }
    else
    {
        newNode->next = this->head;
        this->head = newNode;
        this->tail->next = this->head;
    }
    length++;
}

void CLIST::push_back(int value)
{
    Node *newNode = Node::create_node(value);

    if (this->head == nullptr)
    {
        this->head = this->tail = newNode;
    }
    else
    {
        newNode->next = this->head;
        this->tail->next = newNode;
        this->tail = newNode;
    }
    length++;
}

void printList(CLIST list)
{
    CLIST::Node *temp = list.head;
    do
    {
        std::cout << temp->data << "->";
        temp = temp->next;
    } while (temp != list.head);
}