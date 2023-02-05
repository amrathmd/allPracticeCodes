#include<iostream>
#include<stack>
#include<string.h>
using namespace std;
void reverseString(string s){
    stack<string>st;
    for(int i=0;i<s.length();i++){
        string d="";
        while(s[i]!=' ' && i!=s.length()){
            d=d+s[i];
            i++;
        }st.push(d);
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}
int main(){
    string s;
    cin>>s;
    reverseString(s);
}