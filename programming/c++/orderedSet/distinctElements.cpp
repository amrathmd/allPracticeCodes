#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,3,4,5,5,6,7};
    unordered_set<int>s;
    for(int i=0;i<sizeof(arr)/sizeof(int);i++){
        s.insert(arr[i]);
    }
    cout<<s.size()<<endl;
}