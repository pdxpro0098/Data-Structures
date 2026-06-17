class QUEUE
{
private:
    int *array;
    int front;
    int rear;
    int length;
    int capacity;
    void resize();

public:
    QUEUE();
    QUEUE(int);
    int peek();
    int back();
    void enqueue(int);
    void dequeue();
    int size();
    bool isEmpty();
};