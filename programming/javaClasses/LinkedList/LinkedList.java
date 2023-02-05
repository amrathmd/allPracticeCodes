public class LinkedList{
    public static class Node{
        int data;
        Node next;

        Node(int data){
            this.data=data;
            this.next=null;
        }
    }
    public static Node head;
    public static Node tail;
    public static void display(){
        Node temp=head;
        while(temp!=null){
            System.out.print(temp.data+"->");
            temp=temp.next;
        }
        System.out.print("null");
        System.out.println();
    }
    public static void insertAtTail(int data){
        Node newNode=new Node(data);
        if(head==null){
            head=tail=newNode;
            return ;
        }
        tail.next=new Node(data);
        tail=tail.next;
    }
    public static void insertAtHead(int data){
        Node newNode=new Node(data);
        if(head==null){
            head=tail=newNode;
            return ;
        }
        newNode.next=head;
        head=newNode;
    }
    public static void main(String args[]){
        LinkedList ll=new LinkedList();
        ll.head=new Node(1);
        ll.head.next=new Node(2);
        ll.head.next.next=new Node(3);
        ll.tail=ll.head.next.next;
        insertAtTail(4);
        insertAtHead(5);
        display();

    }
}