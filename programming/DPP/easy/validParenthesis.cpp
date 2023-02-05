#include<bits/stdc++.h>
using namespace std;
bool isValid(string s) {
        stack<char>st;
        if(s.length()%2!=0) return false;
        for(int i=0;i<s.length();i++){
            if(st.empty()){
                st.push(s[i]);
            }
            else if(s[i]==')' && st.top()=='(' || s[i]=='}' && st.top()=='{' || s[i]==']' && st.top()=='['){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }return st.empty();
}

int main(){
    string s="(){}}{";
    cout<<isValid(s)<<endl;
}