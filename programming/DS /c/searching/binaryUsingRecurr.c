#include<stdio.h>
int binarySearch(int *arr,int low,int high,int key){
    if(high>=1){
        int mid=(low+(high-1));
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            return binarySearch(arr,low,mid-1,key);
    }
        else if(arr[mid]<key){
            return binarySearch(arr,mid+1,high,key);
    }
    }
    return -1;
}
int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        arr[i]=i+1;
    }
    int a=binarySearch(arr,0,9,2);
    if(a>=0){
        printf("element is found At:%d\n",a);
    }
    else{
        printf("element is found\n");
    }
    
}