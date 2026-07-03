package Java.Linked_List.Singly_Linked_List;

public class SLIST {

    private int length;
    private Node head;

    private class Node {
        int data;
        Node next;

        Node(int data) {
            this.data = data;
            this.next = null;
        }
    }

    SLIST() {
        this.head = null;
        this.length = 0;
    }

    SLIST(int data) {
        this.head = new Node(data);
        this.length = 0;
    }

    public void push_front(int data) {
        Node newNode = new Node(data);

        if (this.head == null) {
            head = newNode;
        } else {
            newNode.next = this.head;
            head = newNode;
        }
        this.length++;
    }

    public void push_back(int data) {
        Node newNode = new Node(data);

        if (this.head == null) {
            head = newNode;
        } else {
            Node temp = this.head;
            while (temp.next != null) {
                temp.next = newNode;
            }
        }
        this.length++;
    }

    public int size() {
        return this.length;
    }

    public void pop_front() {
        if (this.head == null) {
            return;
        }

        this.head = this.head.next;
        this.length--;
    }

    public void pop_back() {
        if (this.head == null) {
            return;
        }

        if (this.head.next == null) {
            this.head = null;
        } else {

            Node temp = this.head;
            while (temp.next.next != null) {
                temp = temp.next;
            }
            temp.next = null;
        }
        this.length--;
    }

    public void print_list() {
        Node temp = this.head;

        while (temp != null) {
            System.out.print(temp.data + "->");
            temp = temp.next;
        }
        System.out.print("null");
    }
}
/*
 * void insert_at(int, int);
 * void remove_at(int);
 * 
 * int front();
 * int back();
 */