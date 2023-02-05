import java.util.*;
class SortingAlgos{
    public static void swap(int arr[],int i,int j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    public static void selectionSort(int arr[]){
        for(int i=0;i<arr.length;i++){
            int smallest=i;
            for(int j=i;j<arr.length;j++){
                if(arr[j]<arr[smallest])
                    smallest=j;
            }
            swap(arr,i,smallest);
        }
    }
    public static void countSort(int arr[]){
        int maxim=Integer.MIN_VALUE;
        for(int i=0;i<arr.length;i++){
            if(maxim<arr[i]){
                maxim=arr[i];
            }
        }
        int auxilaryArr[]=new int[maxim+1];
        Arrays.fill(auxilaryArr,0);
        for(int i=0;i<arr.length;i++){
            auxilaryArr[arr[i]]++;
        }int j=0;
        for(int i=0;i<auxilaryArr.length;i++){
            while(auxilaryArr[i]>0){
                arr[j]=i;
                j++;
                auxilaryArr[i]--;
            }
        }

    }
    public static void main(String args[]){
        int arr[]=new int[10];
        Scanner sc=new Scanner(System.in);
        for(int i=0;i<arr.length;i++){
            arr[i]=sc.nextInt();
        }
        //selectionSort(arr);
        countSort(arr);
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }System.out.println();
    }
}