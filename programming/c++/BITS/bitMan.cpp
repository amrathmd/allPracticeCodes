#include<iostream>
using namespace std;
int getbit(int num,int pos){
    return ((num & (1<<pos))!=0);
}
int setbit(int num,int pos){
    return (num | (1<<pos));
}
int clearbit(int num,int pos){
    int mask=~(1<<pos);
    return (num & mask);
}
int main(){
    cout<<getbit(12,2)<<endl;
    cout<<setbit(5,1)<<endl;
    cout<<clearbit(5,0)<<endl;
    
}