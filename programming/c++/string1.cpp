#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    for(int i=0;i<str.size();i++){
        if(str[i]>=97 && str[i]<=122){
            str[i]=str[i]-32;
        }
    }
    string str1;
    getline(cin,str1);
    transform(str1.begin(),str1.end(),str1.begin(),::toupper);
    cout<<str<<endl;
    cout<<str1<<endl;
}