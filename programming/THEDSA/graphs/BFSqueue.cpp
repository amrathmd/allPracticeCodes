#include<bits/stdc++.h>
using namespace std;
int v,e;
int adj[100][100];

vector<int> BFS(){
    vector<bool>visited(v+1,false);
    queue<int>q;
    q.push(1);
    vector<int>res;
    while(!q.empty())
{
    int k=q.front();
    res.push_back(k);
    q.pop();
    visited[k]=true;
    for(int i=1;i<v+1;i++)
    {
        if(adj[k][i]==1 && visited[i]==false){
            q.push(i);
            visited[i]=true;
        }
    }
}
    return res;

}
int main(){
    
    cin>>v>>e;
    int adj[v+1][v+1];
    for(int i=1;i<v+1;i++){
        for(int j=1;j<v+1;j++){
            cin>>adj[i][j];
            if(adj[i][j]==1){
                adj[j][i]=1;
            }
        }
    }vector<int>res=BFS();
    for(auto it=res.begin();it!=res.end();it++){
        cout<<(*it)<<" ";
    }cout<<endl;
}                                           