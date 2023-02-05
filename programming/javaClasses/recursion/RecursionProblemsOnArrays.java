public class RecursionProblemsOnArrays{
    public static boolean isSorted(int arr[],int i){
        if(i==arr.length-1){
            return true;
        }
        if(arr[i]>arr[i+1]) return false;
        return isSorted(arr,i+1);
    }
    public static int firstOccurence(int arr[],int key,int i){
        if(i==arr.length-1) return -1;
        if(arr[i]==key) return i;
        return firstOccurence(arr, key, i+1);
    }
    public static int lastOccurence(int arr[],int key,int i){
        if(i==0) return -1;
        if(arr[i]==key) return i;
        return lastOccurence(arr, key, i-1);
    }
    public static int lastOccurence2(int arr[],int key,int i){
        if(i==arr.length-1) return -1;
        int isFound=lastOccurence2(arr, key, i+1);
        if(isFound!=-1){
            return isFound;
        }
        if(arr[i]==key) return i;
        return isFound;
    }
    public static void main(String args[]){
        int arr[]={1,2,3,4,5};
        int arr1[]={4,3,5,2,1,5};
        System.out.println(isSorted(arr1,0));
        System.out.println(firstOccurence(arr1, 5, 0));
        System.out.println(lastOccurence(arr1, 5, arr.length-1));
        System.out.println(lastOccurence2(arr1, 5, 0));
    }
}