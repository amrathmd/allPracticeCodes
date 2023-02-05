#include<stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;

}
int partition(int arr[],int l,int r,int n){
    int pivot=arr[r];
    int i=l-1;
    for(int j=l;j<=r-1;j++){
        if(arr[j]<pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }for(int i=0;i<n;i++){
        	printf("%d ",arr[i]);
        }
        printf("\n");
    }swap(&arr[i+1],&arr[r]);

        return i+1;
        
}
void quickSort(int arr[],int l,int r,int n){
    if(l<r){

        int pi=partition(arr,l,r,n);
        quickSort(arr,l,pi-1,n);
        quickSort(arr,pi+1,r,n);
    }
}
int main(){
    int arr[100];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    quickSort(arr,0,n-1,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }printf("\n");

}
