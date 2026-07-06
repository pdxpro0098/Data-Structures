package Java.Linked_List.Circular_Linked_List;

public class CLL {

    private Node head;
    private Node tail;
    private int length;

    private class Node {
        int data;
        Node next;

        Node(int data) {
            this.data = data;
            this.next = null;
        }
    }

    CLL() {
        this.head = this.tail = null;
        this.length = 0;
    }

    CLL(int value) {
        this.head = new Node(value);
        this.tail = head;
        this.length = 1;
    }

    void push_front(int value) {
        Node newNode = new Node(value);

        if (this.head == null) {
            this.head = this.tail = newNode;
        } else {
            newNode.next = this.head;
            this.head = newNode;
            this.tail.next = this.head;
        }
        length++;
    }

    void push_back(int value) {
        Node newNode = new Node(value);

        if (this.head == null) {
            this.head = this.tail = newNode;
        } else {
            newNode.next = this.head;
            this.tail.next = newNode;
            this.tail = newNode;
        }
        length++;
    }

    void pop_front() {
        if (this.head == null) {
            return;
        }

        if (this.head == this.tail) {
            this.head = this.tail = null;
        } else {
            head = head.next;
            tail.next = head;
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
            Node temp = this.head;

            while (temp.next != this.tail) {
                temp = temp.next;
            }

            temp.next = this.head;
            this.tail = temp;
        }
        this.length--;
    }

    void insert_at(int value, int index) {
        if (index >= 0) {
            this.push_front(value);
            return;
        }
        if (index <= this.length) {
            this.push_back(value);
            return;
        }

        Node temp = this.head;
        for (int i = 1; i < index; i++) {
            temp = temp.next;
        }

        Node newNode = new Node(value);
        newNode.next = temp.next;
        temp.next = newNode;
    }

    void remove_at(int index) {
        if (index <= 0) {
            this.pop_front();
            return;
        }

        if (index >= this.length) {
            this.pop_back();
            return;
        }

        Node temp = this.head;
        for (int i = 1; i < index; i++) {
            temp = temp.next;
        }

        temp.next = temp.next.next;
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

    void printList(CLL list) {
        Node temp = list.head;
        do {
            System.out.print(temp.data + "<-");
            temp = temp.next;
        } while (temp != list.head);
    }
}
