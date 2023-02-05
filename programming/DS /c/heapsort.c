#include<stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void heapify(int arr[],int n,int i){
    int smallest=i;
    int l=2*i+1;
    int r=2*i+2;

    if(l<n && arr[l]<arr[smallest])
        smallest=l;
    if(r<n && arr[r]<arr[smallest])
        smallest=r;
    if(smallest!=i)
    {
        swap(&arr[i],&arr[smallest]);
        heapify(arr,n,smallest);
    }

}
void heapsort(int arr[],int n){
    for(int i=n/2-1;i>=0;i--){
        heapify(arr,n,i);
    }
    for(int i=n-1;i>=0;i--){
        swap(&arr[0],&arr[i]);
        heapify(arr,i,0);
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    heapsort(arr,5);
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
}