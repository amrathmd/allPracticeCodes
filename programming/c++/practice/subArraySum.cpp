#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter the sum:";
    int s;
    cin>>s;
    int j=0,i=0,st=-1,en=-1;
    int sum=0;
    while(j<n && s>=sum+a[j]){
        sum=sum+a[j];
        j++;
    }
     if(sum==s){
            cout<<i+1<<' '<<j<<endl;
    }
    while(j<n){
        sum=sum+a[j];
        while(s<sum){
            sum=sum-a[i];
            i++;
        }
        if(sum==s){
            st=i+1;
            en=j+1;
            break;
        }
        j++;
    }
    cout<<st<<" "<<en<<endl;
}