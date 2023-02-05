#include<bits/stdc++.h>
//keys in maps are unique
//key value pair;
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    map<int,int>mp;
    for(int i=0;i<sizeof(arr)/sizeof(int);i++){
        mp.insert({arr[i],i});//O(logn)
    }
    mp.erase(5);//takes key also iterator;;
    auto a=mp.find(4);
    cout<<(*a).second<<endl;
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    
}