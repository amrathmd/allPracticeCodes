#include<iostream>
#include<string>
using namespace std;
void revOfStr(string str){
    if(str.length()==0){
        return;
    }
    string restStr=str.substr(1);
    revOfStr(restStr);
    cout<<str[0];
}
int main(){
    revOfStr("binod");
}