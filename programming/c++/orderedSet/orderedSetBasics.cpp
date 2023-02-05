
#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<int> s;
    s.insert(5);
    s.insert(10);
    s.insert(5);
    s.insert(10);
    for(auto i=s.begin();i!=s.end();i++){
        cout<<*i<<endl;//iterator through the ordered set;
    }
    s.erase(10);//deletes value from the set;
    if(s.find(5)!=s.end()){
        cout<<"found!"<<endl;//find if the element present or not:
    }
    cout<<s.count(5)<<endl;//gives count:
    

    
}