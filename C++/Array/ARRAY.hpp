#include <iostream>
#include <cstdio>

class ARRAY
{
private:
    int *array;
    int length;
    int capacity;
    void resize();

public:
    ARRAY();
    ARRAY(int);
    void printArray();
    void push_front(int);
    void pop_front();
    void push_back(int);
    void pop_back();
    int at(int);
    bool empty();
    int size();
    int max_size();
};

/*

Capacity:
size	Return size (public member function)
max_size	Return maximum size (public member function)
resize	Change size (public member function)
capacity	Return size of allocated storage capacity (public member function)
empty	Test whether vector is empty (public member function)
reserve	Request a change in capacity (public member function)
shrink_to_fit	Shrink to fit (public member function)

Element access:
operator[]	Access element (public member function)
at	Access element (public member function)
front	Access first element (public member function)
back	Access last element (public member function)
data	Access data (public member function)

Modifiers:
assign	Assign vector content (public member function)
push_back	Add element at the end (public member function)
pop_back	Delete last element (public member function)
insert	Insert elements (public member function)
erase	Erase elements (public member function)
swap	Swap content (public member function)
clear	Clear content (public member function)
emplace	Construct and insert element (public member function)
emplace_back	Construct and insert element at the end (public member function)*/