#include<iostream>
using namespace std;
int main(){
    for (int i=1;i<6;i++){
        for (int j=5;j>0;j--){
            if(j<=5-i){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }cout<<endl;
    }
}