public class App {

    public static void main(String[] args) {
        Queue que = new Queue();
        que.enqueue(12);
        que.enqueue(14);
        que.enqueue(15);

        while (!que.isEmpty()) {
            System.out.println(que.peek());
            que.dequeue();
        }
    }
}