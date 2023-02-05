#include<iostream>
#include<math.h>
using namespace std;
void subsets(int arr[],int n){
    for(int i=0;i<(1<<n);i++){
        for(int j=0;j<n;j++){
            if(i & (1<<j)){
                cout<<arr[j]<<" ";
            }
        }cout<<endl;
    }
}
int main(){
    int size;
    cin>>size;
    int arr[size];
    cout<<"enter elements into the array:"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    subsets(arr,size);

}