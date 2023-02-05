#include<iostream>
int firstOcc(int arr[],int key,int n,int pos){
    if(pos==n){
        return -1;
    }
    if(arr[pos]==key){
        return pos;
    }
    return firstOcc(arr,key,n,pos+1);
}
using namespace std;
int main(){
    int size;
    cout<<"enter size of an array";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];

    }
    int key;
    cout <<"enter the key you want to find";
    cin>>key;

    cout<<firstOcc(arr,key,size,0);

}