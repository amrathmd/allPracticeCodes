#include<stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void selectionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int j=i-1;
        if(arr[j]<arr[i]){
            swap(&arr[j],&arr[i]);
        }
    }for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }printf("\n");
}
int main(){
    int arr[]={5,4,3,2,1};
    selectionSort(arr,5);
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }printf("\n");
}