#include<iostream>
#include<vector>
#define vi vector<int>
#define vvi vector<vi>

using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>adjl(n+1,vector<int>(n+1));
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        adjl[x].push_back(y);
        adjl[y].push_back(x);
    }
    for(auto it=adjl.begin();it!=adjl.end();it++){
        for(auto i=(*it).begin();i!=(*it).end();i++){
            if(*i!=0)
                cout<<*i<<" ";
        }cout<<endl;
    }
    
    
}