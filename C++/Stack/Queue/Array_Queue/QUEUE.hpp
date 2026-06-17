class QUEUE
{
private:
    int *array;
    int Top;
    int length;
    int capacity;
    void resize();

public:
    QUEUE();
    int peek();
    int rear();
    void enqueue(int);
    void dequeue();
    int size();
    bool isEmpty();
};