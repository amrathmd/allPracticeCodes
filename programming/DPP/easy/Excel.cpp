#include<bits/stdc++.h>
using namespace std;
int value(string s){
    int sum=0;
   for(int i=s.length()-1;i>=0;i--){
        if(i==s.length()-1) cout<<(s[i]-64)<<" ";
        else{
        cout<<(26*(s[i]-64))<<" ";
        }
   }
   return sum;
}//actually here the solution is wrong check leetcode submission
int main(){
    string s="FXSHRXW";
    value(s);
}