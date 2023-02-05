#include<bits/stdc++.h>
using namespace std;
int visited[100]={0};
vector<int>traversal;
void bfs(int i,vector<vector<int>>adj){
    queue<int>q;
    q.push(i);
    visited[i]=1;
    while(!q.empty()){
        traversal.push_back(q.front());
        int node=q.front();
        q.pop();
        for(auto it:adj[i]){
            if(visited[it]==0){
                q.push(it);
                visited[it]=1;
            }
        }
        
}


}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>adj(n+1,vector<int>(n+1));
    
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(int i=1;i<=n;i++){
        if(visited[i]==0){
            bfs(i,adj);
        }
    }
    for(auto it:traversal){
        cout<<it<<" ";
    }cout<<endl;

}