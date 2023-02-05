import java.util.*;
class QueueUsingArray{
    public static class Queue{
        static int size=10;
        private static int front =-1;
        private static int rear=-1;
        static int arr[]=new int[size];
        public static void add(int data){
            if(rear==-1 && front==-1){
                rear=0;
                front=0;
                arr[rear]=data;
                return ;
            }
            if(rear==size-1){
                System.out.println("Queue overflow");
                return;
            }
            rear=rear+1;
            arr[rear]=data;
        }
        public static int peek(){
            if(rear==-1 && front==-1){
                System.out.println("Queue is empty");
                return -1;
            }
            return arr[front];
        }
        public static void remove(){
            if(rear==-1 && front==-1){
                System.out.println("Queue is empty");
                return ;
            }
            if(front==rear){
                front=rear=-1;
                return ;
            }
            for(int i=0;i<rear;i++){
                arr[i]=arr[i+1];
            }
            rear--;
        }
        public static boolean empty(){
            if(rear==-1 && front==-1){
                System.out.println("Queue is empty");
                return true;
            }
            return false;
        }
        
    }
    public static void main(String args[]){
        Queue q=new Queue();
        System.out.println(q.empty());
        q.add(1);
        q.add(2);
        q.add(3);
        System.out.println(q.peek());
        System.out.println(q.empty());
        q.remove();
        System.out.println(q.peek());
        q.remove();
        System.out.println(q.peek());
        q.remove();
        q.peek();



    }

}