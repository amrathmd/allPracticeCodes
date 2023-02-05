#include<stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void selectionSort(int arr[],int n){
    int minIdx;
    for(int i=0;i<n-1;i++){
        minIdx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i])
                minIdx=i;
            swap(&arr[j],&arr[minIdx]);
        }
    }
}
int main(){
    int arr[]={5,4,3,2,1};
    selectionSort(arr,5);
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }printf("\n");
}