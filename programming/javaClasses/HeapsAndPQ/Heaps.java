import java.util.*;
public class Heaps{
  static List<Integer> arr=new ArrayList<>();
  public static void heapify(int i){
    int left=2*i+1;
    int right=2*i+2;
    int minIdx=i;

    if(left<arr.size() && arr.get(left)<arr.get(minIdx)) minIdx=left;
    if(right<arr.size() && arr.get(right )<arr.get(minIdx) ) minIdx=right;
    if(minIdx!=i){
      int temp=arr.get(i);
      arr.set(i,arr.get(minIdx));
      arr.set(minIdx,temp);
      heapify(minIdx);

    }

  }
  public static void heapSort(){
    for(int i=arr.size()/2;i>=0;i--){
      heapify(i);
    }
    int n=arr.size()-1;
    for(int i=n;i>=0;i--){
      int temp=arr.get(i);
      arr.set(i,arr.get(0));
      arr.set(i,temp);
    }
    

  }
  public static void main(String args[]){
    for(int i=5;i>0;i--){
      arr.add(i);
    }
    heapSort();
    for(int i=0;i<arr.size();i++){
      System.out.println(arr.get(i));
    }

  }
}