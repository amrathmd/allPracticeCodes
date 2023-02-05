#include<iostream>
using namespace std;
int main(){
    int size;
    cin>>size;
    int list[size];
    for(int i=0;i<size;i++){
        cin>>list[i];
    }
    int pd=list[1]-list[0];
    int current=2;
    int ans=2;
    int j=2;
    while(j<=size){
        if(list[j]-list[j-1]==pd){
            current++;
        }
        else{
            pd=list[j]-list[j-1];
            current=2;
        }ans=max(ans,current);
        j++;
    }cout<<ans;
}