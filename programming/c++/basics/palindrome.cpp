#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the number you want to check"<<endl;
    cin>>a;
    int rev=0;
    int temp=a;
    while(a>0){
        int rem=a%10;
        rev=rem+rev*10;
        a=a/10;
        }if(rev==temp){
            cout<<"the number is a palindrome"<<endl;
        }
}