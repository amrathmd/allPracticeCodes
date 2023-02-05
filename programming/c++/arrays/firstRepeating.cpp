#include<iostream>
using namespace std;
int main(){
    int size;
    cin>>size;
    int list[size];
    int idx[size];
    for(int i=0;i<size;i++){
        cin>>list[i];
        idx[i]=1;
    }
    int j=0;
    for(int i=j+1;i<size;i++){
        if(list[i]==list[j]){
            idx[j]=idx[j]+1;
        }j++;
    }
    for(int i=0;i<size;i++){
        cout<<idx[i];
    }
}