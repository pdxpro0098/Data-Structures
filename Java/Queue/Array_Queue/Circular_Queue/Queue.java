package Java.Queue.Array_Queue.Circular_Queue;

public class Queue {

    private int front;
    private int rear;
    private int length;
    private int capacity;
    private int[] que;

    Queue() {
        this.front = -1;
        this.rear = -1;
        this.length = 0;
        this.capacity = 10;
        this.que = new int[capacity];
    }

    Queue(int capacity) {
        this.front = -1;
        this.rear = -1;
        this.length = 0;
        this.capacity = capacity;
        this.que = new int[capacity];
    }

    private void resize() {
        int[] newque = new int[this.capacity + 2];

        for (int i = 0; i < length; i++) {
            newque[i] = que[(front + i) % capacity];
        }

        que = newque;
        capacity += 2;
        front = 0;
        rear = length - 1;
    }

    public int peek() {
        if (isEmpty()) {
            System.out.println("Queue is Empty");
            return 0;
        }

        return que[front];
    }

    public int back() {
        if (isEmpty()) {
            System.out.println("Queue is Empty");
            return 0;
        }
        return que[rear];
    }

    public void enqueue(int value) {
        if (length == capacity) {
            resize();
        }

        if (front == -1 && rear == -1) {
            front++;
            rear++;
        } else {
            rear = (rear + 1) % capacity;
        }
        length++;
        que[rear] = value;
    }

    void dequeue() {
        if (isEmpty())
            return;

        if (length == 1) {
            front = -1;
            rear = -1;
            length = 0;
        } else {
            front = (front + 1) % capacity;
            length--;
        }
    }

    int size() {
        return length;
    }

    public boolean isEmpty() {
        return length == 0;
    }
}
