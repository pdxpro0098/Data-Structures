package Java.Queue.Array_Queue.Linear_Queue;

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
        this.que = new int[10];
    }

    Queue(int capacity) {
        this.front = -1;
        this.rear = -1;
        this.length = 0;
        this.capacity = capacity;
        this.que = new int[capacity];
    }

    public int peek() {
        if (isEmpty()) {
            System.out.println("Queue is Empty");
            return 0;
        }

        return que[front];
    }

    public void enqueue(int value) {
        if (isFull()) {
            System.out.println("Queue is full");
            return;
        }

        if (isEmpty()) {
            front++;
        }

        rear++;
        length++;
        que[rear] = value;
    }

    public void dequeue() {
        if (isEmpty()) {
            System.out.println("Queue is empty");
        } else {
            front++;
            length--;
        }
    }

    public int size() {
        return length;
    }

    public boolean isEmpty() {
        return length == 0;
    }

    public boolean isFull() {
        return capacity == rear - 1;
    }

}
