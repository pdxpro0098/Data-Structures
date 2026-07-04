package Java.Linked_List.Doubly_Linked_List;

public class DLL {

    private int length;
    private Node head;
    private Node tail;

    private class Node {

        int data;
        Node next;
        Node prev;

        Node(int data) {
            this.data = data;
            this.next = this.prev = null;
        }
    }

    DLL() {
        this.head = null;
        this.length = 0;
    }

    DLL(int data) {
        this.head = new Node(data);
        this.length++;
    }

    void push_front(int value) {
        Node newNode = new Node(value);

        if (this.head == null) {
            this.head = this.tail = newNode;
        } else {
            newNode.next = this.head;
            this.head.prev = newNode;
            this.head = newNode;
        }
        this.length++;
    }

    void push_back(int value) {

        Node newNode = new Node(value);
        if (this.tail == null) {
            this.head = this.tail = newNode;
        } else {
            newNode.prev = this.tail;
            this.tail.next = newNode;
            this.tail = newNode;
        }
        this.length++;
    }

    void pop_front() {
        if (this.head == null) {
            return;
        }

        if (this.head.next == null) {
            this.head = this.tail = null;
            this.length--;
            return;
        }

        this.head = this.head.next;
        this.head.prev = null;
        this.length--;
    }

    void pop_back() {
        if (this.tail == null)
            return;

        if (this.tail.prev == null) {
            this.tail = this.head = null;
            this.length--;
            return;
        }

        this.tail = this.tail.prev;
        this.tail.next = null;
        this.length--;
    }

    void insert_at(int value, int index) {
        if (index <= 0) {
            push_front(value);
            return;
        }

        if (index >= this.length) {
            push_back(value);
            return;
        }

        Node newNode = new Node(value);
        Node temp = this.head;
        for (int i = 1; i < index; i++) {
            temp = temp.next;
        }

        newNode.prev = temp.prev;
        newNode.next = temp;
        temp.prev.next = newNode;
        temp.prev = newNode;
        this.length++;
    }

    void remove_at(int index) {
        if (index <= 0) {
            pop_front();
            return;
        }

        if (index >= this.length) {
            pop_back();
            return;
        }

        Node temp = this.head;
        for (int i = 1; i < index; i++) {
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
        while (temp != null) {
            System.out.print(temp.data + "->");
            temp = temp.next;
        }
        System.out.println("null");
    }

    void printBackward() {
        System.out.print("null");
        Node temp = this.tail;
        while (temp != null) {
            System.out.print(temp.data + "<-");
            temp = temp.prev;
        }
    }
}
