#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int binary(int num){
    string str;
    int bits=0;
    while(num>0){
        int rem=num%2;
        bits=bits*10+rem;
        num=num/2;
    }
    return bits;
}
int main(){
    int num;
    cin>>num;
    cout<<binary(num)<<endl;
}