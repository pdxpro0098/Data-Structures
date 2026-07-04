package Java.Linked_List.Doubly_Linked_List;


public class App {
        public static void main(String[] args) {

        DLL list = new DLL();
        list.push_front(12);
        list.push_front(13);
        list.push_front(15);
        list.push_front(17);
        list.printBackward();
    }
}
