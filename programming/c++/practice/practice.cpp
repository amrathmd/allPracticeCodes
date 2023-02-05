#include<iostream>
using namespace std;
bool sortedArray(int arr[],int n,int start,int end){
    if(arr[0]<arr[1]){
        return 1;
    }
    sortedArray(arr,n,start+1,end);
    else
        return 0;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(sortedArray(arr,n,0,n)==1){
        cout<<"sorted"<<endl;
    };

}