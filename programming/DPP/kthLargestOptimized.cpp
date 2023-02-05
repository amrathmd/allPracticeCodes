#include<bits/stdc++.h>
using namespace std;
#include<stdio.h>
//min heap
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void heapify(int arr[],int n,int i){
    int smallest=i;
    int l=2*i+1;
    int r=2*i+2;

    if(l<n && arr[l]>arr[smallest])
        smallest=l;
    if(r<n && arr[r]>arr[smallest])
        smallest=r;
    if(smallest!=i)
    {
        swap(&arr[smallest],&arr[i]);
        heapify(arr,n,smallest);
    }

}

int findKthLargest(int* arr, int n, int k){
    if(k==1) break;
    int c=0;
    for(int i=n/2-1;i>=0;i--){
        heapify(arr,n,i);
    }
    for(int i=n-1;i>=0;i--){
        swap(&arr[0],&arr[i]);
        heapify(arr,i,0);
        c++;
        if(c==k-1) break;
    }return arr[0];
}
int main(){
    int arr[]={1,2};
    cout<<findKthLargest(arr,1);

}