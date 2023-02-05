#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter the string:";
    getline(cin,str);
    string subStr;
    cout<<"enter the substring you want to search:";
    cin>>subStr;
    int repeat=0;
    int flag=0;
    for(int i=0;i<str.size();i++){
        for(int j=i;j<i+subStr.size();j++){
            if(str[j]==subStr[j-i]){
                repeat++;
            }
        }
            
        
    }cout<<(repeat/subStr.size())<<endl;
}