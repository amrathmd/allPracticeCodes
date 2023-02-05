#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v;
    int m;
    cin>>m;
    int x;
    for(int i=0;i<m;i++){
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    for(auto element:v){
        cout<<element<<endl;
    }
    //vector<int> :: iterate it;
    //for(it=v.begin();it!=v.end();it++){
      //  cout<<*it<<endl;
    //}
}