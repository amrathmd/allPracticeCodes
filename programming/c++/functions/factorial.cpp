#include<iostream>
using namespace std;
int fact (int num){
    int f=1;
    for(int i=num;i>=1;i--){
        f*=i;
    }return f;
}
int main(){
    int num;
    cout<<"enter the number for factorial:";
    cin>>num;
    cout<<fact(num)<<endl;
}