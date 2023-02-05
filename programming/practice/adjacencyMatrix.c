#include<stdio.h>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int adj[n+1][n+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<n+1;j++){
            adj[i][j]=0;
        }
    }
    int u,v;
    
    for(int i=0;i<m;i++){
        scanf("%d%d",&u,&v);
        adj[u][v]=1;
        adj[v][u]=1;
    }
    
    for(int i=1;i<n+1;i++){
        for(int j=1;j<n+1;j++){
            printf("%d ",adj[i][j]);
        }printf("\n");
    }
}