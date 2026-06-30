package Java.Queue.Array_Queue.Linear_Queue;

public class App {
    public static void main(String[] args) {
        Queue a = new Queue(15);
        a.enqueue(12);
        a.enqueue(13);
        a.enqueue(14);
        a.enqueue(15);
        a.enqueue(16);
        while (!a.isEmpty()) {
            System.out.println(a.peek());
            a.dequeue();
        }
    }
}
