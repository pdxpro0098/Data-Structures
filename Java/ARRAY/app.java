package Java.ARRAY;

public class app {
    public static void main(String[] args) {
        ARRAY a = new ARRAY();
  
        for (int i : a.arr) {
            System.out.println(i);
        }
        System.out.println("len"+ a.length);
        System.out.println("cap"+ a.capacity);
    }
}