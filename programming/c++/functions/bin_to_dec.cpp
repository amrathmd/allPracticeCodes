#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int bintodec(int bits){
    int num=0;
    string str=to_string(bits);
    int i=str.size();
    while(bits>0){
        bits=bits%10;
        num=num+bits*(pow(2,i));
        i--;
        bits=bits/10;
    }return num;

}
int main(){
    int bits;
    cin>>bits;
    cout<<bintodec(bits)<<endl;
}