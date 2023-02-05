#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector< pair<int,char> > v;
    for(int i=0;i<5;i++){
        pair<int,char> p;
        p.first=i;
        cin>>p.second;
        v.push_back(p);
    } 
    vector<pair<int,int>>l;
    for(int i=0;i<5;i++){
        l.push_back(make_pair(i,i+10));
    }
    
}