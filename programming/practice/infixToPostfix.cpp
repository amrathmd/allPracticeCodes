#include<bits/stdc++.h>
using namespace std;

void infixToPostfix(string str){
   stack<string>s;
   for(int i=0;i<str.length();i++){
    string d="";
        while(str[i]!=' ' && i!=str.length()){
            d=d+str[i];
            i++;
        }s.push(d);
    }
   while(!s.empty()){
        cout<<s.top();
        s.pop();
   }cout<<endl;
}
int main(){
    string s="hey how are you?";
    infixToPostfix(s);

}