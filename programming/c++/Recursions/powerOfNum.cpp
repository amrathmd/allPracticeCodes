#include<iostream>
using namespace std;
int powerOfNum(int num,int p){
    if(p==0){
        return 1;
    }
    int prevpower=powerOfNum(num,p-1);
    return num*prevpower;
}
int main(){
    int num=4;
    cout<<powerOfNum(2,3)<<endl;
    
}