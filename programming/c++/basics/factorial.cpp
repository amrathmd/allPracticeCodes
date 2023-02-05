#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int fact=1;
    for(int i=a;i>1;i--){
        fact=fact*i;
    }cout<<"factorial of the munber is :"<<fact<<endl;
}