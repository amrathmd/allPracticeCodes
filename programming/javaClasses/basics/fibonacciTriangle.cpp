#include<bits/stdc++.h>
using namespace std;

void fib(int arr[],int n){
    arr[1]=1;
    arr[2]=1;
    for(int i=3;i<=n;i++){
       arr[i]=arr[i-1]+arr[i-2]; 
    }
}
int main(){
   string s;
   cin>>s;
   stack<string>st;
    string str;
    for(int i=0;i<s.length();i++){
        if(s[i]!=' '){
            str.push_back(s[i]);
        }
        else{
            st.push(str);
            str.clear();
        }
    }
    while(!st.empty()){
        string a=st.top();
        cout<<a<<"";
        st.pop();
    }cout<<endl;
}