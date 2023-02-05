#include<iostream>
using namespace std;
int main(){
    for (int i=1;i<6;i++){
        for (int j=1;j<6;j++){
            if(j>=6-i){
                cout<<"* ";
            }else{
                cout<<" ";
            }
        }cout<<endl;
    }
    //2nd loop for ulat triangle
    for(int i=5;i>0;i--){
        for(int j=1;j<6;j++){
            if(j>=6-i){
                cout<<"* ";
            }else{
                cout<<" ";
            }

        }cout<<endl;
    }
}