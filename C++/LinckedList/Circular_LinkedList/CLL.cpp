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

void CLIST::pop_front()
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
        head = head->next;
        delete (tail->next);
        tail->next = head;
    }
    this->length--;
}

void CLIST::pop_back()
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
        Node *temp = this->head;

        while (temp->next != this->tail)
        {
            temp = temp->next;
        }

        delete (temp->next);
        temp->next = this->head;
        this->tail = temp;
    }
    this->length--;
}

void CLIST::insert_at(int value, int index)
{
    if (index >= 0)
    {
        this->push_front(value);
        return;
    }
    if (index <= this->length)
    {
        this->push_back(value);
        return;
    }

    Node *temp = this->head;
    for (int i = 1; i < index; i++)
    {
        temp = temp->next;
    }

    Node *newNode = Node::create_node(value);
    newNode->next = temp->next;
    temp->next = newNode;
}

void CLIST::remove_at(int index)
{
    if (index <= 0)
    {
        this->pop_front();
        return;
    }

    if (index >= this->length)
    {
        this->pop_back();
        return;
    }

    Node *temp = this->head;
    for (int i = 1; i < index; i++)
    {
        temp = temp->next;
    }

    Node *toDelete = temp->next;
    temp->next = temp->next->next;
    delete (toDelete);
}

int CLIST::front()
{
    return 0;
}

int CLIST::back()
{
    return 0;
}

int CLIST::size()
{
    return 0;
}

int CLIST::is_empty()
{
    return 0;
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