/*
Symbol      value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
*/
#include<bits/stdc++.h>
using namespace std;
int romanToInt(string s){
    map<char,int>mp;
    mp['I']=1;
    mp['V']=5;
    mp['X']=10;
    mp['L']=50;
    mp['C']=100;
    mp['D']=500;
    mp['M']=1000;
    int i=0;
    int val=0;
    while(i<s.length()){
        
        if(mp[s[i]]<mp[s[i+1]]){
            int e=mp[s[i+1]]-mp[s[i]];
            val=val+e;
            i=i+2;
        }
        else{
            val=val+mp[s[i]];
            i++;
        }
    }return val;
}
int main(){
    string s="III";
    int res=romanToInt(s);
    cout<<res<<endl;
    
    
}