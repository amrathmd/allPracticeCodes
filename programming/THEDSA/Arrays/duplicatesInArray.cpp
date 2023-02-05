#include<bits/stdc++.h>
using namespace std;

bool duplicatesInArray(int v[],int n){
    
    int arr[10000];
    for(int i=0;i<10000;i++){
        arr[i]=-1;
    }
    for(int i=0;i<n;i++){
        if(arr[v[i]]==-1){
            arr[v[i]]=1;
        }
        else{
            return false;
        }
    }return true;
}

int main(){
    int v[]={1,2,3,4,10,10,20};

    
    cout<<duplicatesInArray(v,7)<<endl;
}