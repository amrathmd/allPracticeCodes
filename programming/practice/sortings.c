#include<stdio.h>

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void bubbleSort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }for(int i=0;i<n;i++){
            printf("%d ",arr[i]);
        }printf("\n");
    }
}
int main(){
    int arr[]={5,4,3,2,1};
    bubbleSort(arr,5);
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }

}