#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4};
    int arr1[]={1,2,3,4,5,6,7};
    unordered_set<int>s;
    for(int i=0;i<sizeof(arr)/sizeof(int);i++){
        s.insert(arr[i]);
    }
    for(int i=0;i<sizeof(arr1)/sizeof(int);i++){
        s.insert(arr1[i]);
    }
    for(auto i=s.begin();i!=s.end();i++){
        cout<<*i<<endl;
    }
    cout<<s.count(1)<<endl;
}