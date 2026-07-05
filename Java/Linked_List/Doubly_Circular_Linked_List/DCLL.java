package Java.Linked_List.Doubly_Circular_Linked_List;

public class DCLL {

    int length;
    private Node head;
    private Node tail;

    private class Node {
        Node next;
        Node prev;
        int data;

        Node(int data) {
            this.data = data;
            this.next = this.prev = null;
        }
    }

    DCLL() {
        this.length = 0;
        this.head = this.tail = null;
    }

    DCLL(int value) {
        this.head = this.tail = new Node(value);
        this.length++;
    }

    void push_front(int value) {

        Node newNode = new Node(value);

        if (this.head == null) {
            this.head = this.tail = newNode;
            newNode.next = newNode;
            newNode.prev = newNode;
        } else {
            newNode.next = this.head;
            newNode.prev = this.tail;
            this.head.prev = newNode;
            this.tail.next = newNode;
            this.head = newNode;
        }

        this.length++;
    }

    void push_back(int value) {

        Node newNode = new Node(value);

        if (this.head == null) {
            this.head = this.tail = newNode;
            newNode.next = newNode;
            newNode.prev = newNode;
        } else {
            newNode.next = this.head;
            newNode.prev = this.tail;
            this.head.prev = newNode;
            this.tail.next = newNode;
            this.tail = newNode;
        }

        this.length++;
    }

    void pop_front() {

        if (this.head == null) {
            return;
        }

        if (this.head == this.tail) {
            this.head = this.tail = null;
        } else {
            this.head = this.head.next;
            this.head.prev = this.tail;
            this.tail.next = this.head;
        }
        this.length--;
    }

    void pop_back() {

        if (this.head == null) {
            return;
        }

        if (this.head == this.tail) {
            this.head = this.tail = null;
        } else {
            this.tail = this.tail.prev;
            this.head.prev = this.tail;
            this.tail.next = this.head;
        }
        this.length--;
    }

    void insert_at(int value, int index) {
        if (index >= 0) {
            push_front(value);
            return;
        }

        if (index <= this.length) {
            push_back(value);
            return;
        }

        Node temp = this.head;
        for (int i = 1; i < this.length; i++) {
            temp = temp.next;
        }

        Node newNode = new Node(value);
        newNode.next = temp;
        newNode.prev = temp.prev;
        temp.prev.next = newNode;
        temp.prev = newNode;
        this.length++;
    }

    void remove_at(int index) {
        if (index >= 0) {
            pop_front();
            return;
        }

        if (index <= this.length) {
            pop_back();
            return;
        }

        Node temp = this.head;
        for (int i = 1; i < this.length; i++) {
            temp = temp.next;
        }

        temp.next = temp.next.next;
        temp.next.prev = temp;
        this.length--;
    }

    int front() {
        return this.head.data;
    }

    int back() {
        return this.tail.data;
    }

    int size() {
        return this.length;
    }

    boolean is_empty() {
        return this.length == 0;
    }

    void printForward() {
        Node temp = this.head;
        for (int i = 1; i <= this.length; i++) {
            System.out.print(temp.data + "->");
            temp = temp.next;
        }
    }

    void printBackward() {
        Node temp = this.tail;
        for (int i = this.length; i > 0; i--) {
            System.out.print(temp.data + "<-");
            temp = temp.prev;
        }
    }
}
