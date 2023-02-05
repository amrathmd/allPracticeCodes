#include<stdio.h>
void binarySearch(int *a,int n,int key){
    int low=0;
    int high=n-1;
    int mid=-1;
    while(low<=high){
        mid=(low+high)/2;
        if(a[mid]<key){
            low=mid+1;
        }
        else if(a[mid]>key){
            high=mid-1;
        }
        else if(a[mid]==key){
            printf("key found at index:%d\n",mid);
            return;
        }
    }printf("key not found\n");
}
int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        arr[i]=i+1;
    }
    binarySearch(arr,10,9);
}