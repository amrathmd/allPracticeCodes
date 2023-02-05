#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter the string:";
    getline(cin,str);
    string subStr;
    cout<<"enter the string you want to find:";
    cin>>subStr;
    //searching for the subStr
    cout<<"the substring found at index: ";
    cout<<str.find(subStr);
}