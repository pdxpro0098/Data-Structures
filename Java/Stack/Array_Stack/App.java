package Java.Stack.Array_Stack;

public class App {
    public static void main(String[] args) {
        Stack s = new Stack();
        s.push(12);
        s.push(13);
        s.push(14);
        s.push(15);
        s.push(16);

        while (!s.empty()) {
            System.out.println(s.top());
            s.pop();
        }
    }
}