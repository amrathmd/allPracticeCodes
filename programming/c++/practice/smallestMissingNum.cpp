#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    const int N=1e6+2;
    int idx[N];
    for (int i=0;i<N;i++){
        idx[i]=-1;
    }
    for(int i=0;i<n;i++){
        idx[arr[i]]=i;
    }
    for(int i=0;i<n;i++){
        if(idx[i]==-1){
            if(i==0){
                continue;
            }cout<<i<<endl;
            break;
            
        }
    }
}