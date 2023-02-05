import java.util.*;
class QueueUsingJCF{
    public static void main(String args[]){
        Queue q=new LinkedList<>();
        q.add(1);
        q.add(3);
       System.out.println( q.peek());
       q.remove();
       System.out.println(q.isEmpty());
    }
}