#include<iostream>
#include<climits>
using namespace std;
void swap(int *aptr,int *bptr){
    int temp=*aptr;
    *aptr=*bptr;
    *bptr=temp;
    cout<<*aptr<<" "<<*bptr<<endl;
}
int main(){
    int a=5;
    int b=10;
    swap(&a,&b);
    cout<<a<<" "<<b<<endl;
}