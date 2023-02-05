#include<stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int arr[],int l,int r,int n){
    int pivot=r;
    int i=l-1;
    for(int j=l;j<r;j++){
        if(arr[j]<arr[pivot]){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }swap(&arr[i+1],&arr[r]);
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }printf("\n");
    return i+1;
    

}
void quickSort(int arr[],int l,int r,int n){
    if(l<=r){
        int pi=partition(arr,l,r,n);
        quickSort(arr,l,pi-1,n);
        quickSort(arr,pi+1,r,n);
    }
}
int main(){
    int arr[]={5,4,3,2,1};
    quickSort(arr,0,5,5);
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }printf("\n");
}