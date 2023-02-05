#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int temp=a;
    int per=0;
    int rem;
    while(a>0){
        rem=a%10;
        per=pow(rem,3)+per;
        a=a/10;

    }
    if(temp==per){
        cout<<"numer entered is a armstrong number";
    }
}