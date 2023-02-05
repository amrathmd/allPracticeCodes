import java.util.*;
class ReverseArray{
    public static int[] reverseArray(int arr[]){
        int arrNew[]=new int[arr.length];
        int j=arr.length-1;
        for(int i=0;i<arr.length;i++){
            arrNew[i]=arr[j];
            j--;
        }
        return arrNew;
    }
    public static void swaping(int arr[],int i,int j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    public static int[] reverseArrayOptimised(int arr[]){
        int i=0;
        int j=arr.length-1;
        while(i<j){
            swaping(arr,i,j);
            i++;j--;
        }
        return arr;
    }
    public static void main(String args[]){
        int arr[]={1,2,3,4,5};
        int arrNew[]=reverseArray(arr);
        for(int i=0;i<arrNew.length;i++){
            System.out.print(arrNew[i]+" ");
        }System.out.println();
        reverseArrayOptimised(arrNew);
        for(int i=0;i<arrNew.length;i++){
            System.out.print(arrNew[i]+" ");
        }System.out.println();

    }
}