#include<iostream>
using namespace std;
int lastOcc(int arr[],int n,int key,int pos){
    int restArray=lastOcc(arr,n,key,pos+1);
    if(pos==n){
        return -1;
    }
    if(restArray!=-1){
        return restArray;
    }
    if(arr[pos]==key){
        return pos;
    }
    return -1;
}
int main(){
    int arr[7]={4,3,4,2,5,2,5};
    cout<<lastOcc(arr,7,5,0);
}