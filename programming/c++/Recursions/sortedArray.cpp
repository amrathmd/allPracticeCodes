#include<iostream>
using namespace std;
bool sorted(int arr[],int n){
    if(n==1){
        return true;
    }
    bool restarray=sorted(arr+1,n-1);
    return (arr[0]<arr[1] && restarray);
}
int main(){
    int size;
    cin>>size;
    int arr[size];
    cout<<"enter elements into the array:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<sorted(arr,size)<<endl;
}