#include<iostream>
using namespace std;
//program number to check the give number is apower of 2
int powerof2(int num){
    return (num & (num-1));
}
int main(){
    int num;
    cin>>num;
    if(powerof2(num)==0){
        cout<<"enter number is a power of 2";
    }else{
        cout<<"not a power of 2!";
    }
}