#include<iostream>
using namespace std;
    

int main(){
    int size;
    cin>>size;
    int list[size];
    for(int i=0;i<size;i++){
        cin>>list[i];
    }
    int maxI=-19999;
    for(int i=0;i<size;i++){
        if(maxI<list[i]){
            maxI=max(maxI,list[i]);
            
        }cout<<maxI;
    }

}