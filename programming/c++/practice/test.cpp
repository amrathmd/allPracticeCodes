#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *p = new int(a);
    cout<<*p<<endl;
    delete(p);
    int b[4]={1,2,3,4};
    p=new int[4];
    p=b;
    for(int i=0;i<4;i++){
        cout<<*p<<endl;
        p++;
    }
    delete [] p;
    p=NULL;
}