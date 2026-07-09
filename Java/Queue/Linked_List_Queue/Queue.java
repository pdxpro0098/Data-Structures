package Java.Queue.Linked_List_Queue;

public class Queue {
    private Node front;
    private Node rear;
    private int length;

    private class Node {
        Node next;
        int data;

        Node(int data) {
            this.next = null;
            this.data = data;
        }
    }

    Queue() {
        this.front = this.rear = null;
        this.length = 0;
    }

    Queue(int value) {
        this.front = this.rear = new Node(value);
        this.length = 1;
    }

    void enqueue(int value) {
        Node newNode = new Node(value);

        if (this.isEmpty()) {
            this.front = this.rear = newNode;
        } else {
            this.rear.next = newNode;
            this.rear = newNode;
        }
        this.length++;
    }

    void dequeue() {
        if (this.isEmpty()) {
            return;
        } else if (this.size() == 1) {
            this.front = this.rear = null;
        } else {
            this.front = this.front.next;
        }
        this.length--;
    }

    int peek() {
        return this.front.data;
    }

    int size() {
        return this.length;
    }

    boolean isEmpty() {
        return this.length == 0;
    }

}
