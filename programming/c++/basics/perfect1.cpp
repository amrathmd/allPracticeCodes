#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int temp=0;
    for(int i=1;i<a;i++){
        if(a%i==0){
            temp=temp+i;
        }
    }if(temp==a){
        cout<<"number entered is an armstrong number"<<endl;
    }
}