package Java.Linked_List.Singly_Linked_List;

public class App {
    public static void main(String[] args) {

        SLIST list = new SLIST();
        list.push_front(12);
        list.push_front(13);
        list.push_front(15);
        list.push_front(17);
        list.print_list();
    }
}
