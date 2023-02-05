import java.util.*;

class BinarySearch{
    public static void main(String args[]){
        int arr[]=new int[5];
        Scanner sc=new Scanner(System.in);
        for(int i=0;i<5;i++){
            arr[i]=sc.nextInt();
        }int key;

        System.out.print("Enter the key you want to search:");
        key=sc.nextInt();
        System.out.println(binarySearch(arr,key));
    }
    public static int binarySearch(int arr[],int key){
        int l=0;
        int r=arr.length-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(arr[mid]==key) return mid;
            else if(arr[mid]<key) l=mid;
            else if(arr[mid]>key) r=mid;
        }return -1;
    }
}