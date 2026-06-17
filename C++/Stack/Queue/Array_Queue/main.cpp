#include "QUEUE.hpp"
#include <iostream>
using namespace std;

int main()
{
    QUEUE q;
    q.enqueue(98);
    q.enqueue(99);
    q.enqueue(100);
    q.enqueue(101);
    cout << q.peek();
    q.dequeue();
    cout << q.peek();
    q.dequeue();
    cout << q.peek();
    q.dequeue();
    cout << q.peek();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    cout << q.peek();
    return 0;
}
