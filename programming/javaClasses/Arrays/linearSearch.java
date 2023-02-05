import java.util.*;
class linearSearch{
    public static int linearSearch(int arr[],int key){
        for(int i=0;i<arr.length;i++){
            if(arr[i]==key) return 1;

        }return 0;             
    }
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int arr[]=new int[5];
        int key;
        for(int i=0;i<5;i++){
            arr[i]=sc.nextInt();
        }
        System.out.println("Enter the key you want to search:");
        key=sc.nextInt();
        System.out.println(linearSearch(arr,key));
    }
}