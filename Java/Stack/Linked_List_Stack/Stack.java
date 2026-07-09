package Java.Stack.Linked_List_Stack;

public class Stack {

    private Node head;
    private int length;

    private class Node {
        int data;
        Node next;

        Node(int data) {
            this.data = data;
            this.next = null;
        }
    }

    Stack() {
        this.head = null;
        this.length = 0;
    }

    Stack(int value) {
        this.head = new Node(value);
        this.length = 1;
    }

    void push(int value) {
        Node newNode = new Node(value);
        if (this.empty()) {
            this.head = newNode;
        } else {
            newNode.next = this.head;
            this.head = newNode;
        }
        this.length++;
    }

    void pop() {
        if (this.empty()) {
            return;
        } else if (this.length == 1) {
            this.head = null;
        } else {
            this.head = this.head.next;
        }
        this.length--;
    }

    boolean empty() {
        return this.length == 0;
    }

    int size() {
        return this.length;
    }

    int top() {
        return this.head.data;
    }
}
