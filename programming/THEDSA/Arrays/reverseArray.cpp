#include<iostream>
using namespace std;
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void reverseArray(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<end){
        swap(&arr[start],&arr[end]);
        start=start+1;
        end=end-1;
    }
}
int main(){
    int arr[]={60,120,3080,1,3,9,14,100000,0,-1};
    reverseArray(arr,10);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
        
    }cout<<endl;
}