#include "QUEUE.hpp"

int main()
{
    QUEUE que;
    que.enqueue(12);
    que.enqueue(13);
    que.enqueue(14);
    que.enqueue(15);
    que.dequeue();
    que.printQueue();
    return 0;
}
