#include<iostream>
using namespace std;
int fib(){
    int first_term=0;
    int second_term=1;
    int next_term=first_term+second_term;
    first_term=second_term;
    second_term=next_term;
    return next_term;
}
int main(){
    int num;
    cout<<"enter the number till which you need fibonacci:";
    cin>>num;
    for (int i=0;i<num;i++){
        cout<<fib();
    }
}