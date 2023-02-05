#include<stdio.h>

int main(){
    int n,m;
    printf("Enter the number of vertices and Edges:");
    scanf("%d%d",&n,&m);
    int adj[n+1][n+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<n+1;j++){
            adj[i][j]=0;
        }
    }
    for(int i=0;i<m;i++){
        int u,v;
        printf("Enter the vertices having edge between them:");
        scanf("%d%d",&u,&v);
        adj[u][v]=1;
        adj[v][u]=1;
    }
    printf("Enter the adjacent matrix is:\n");
    for(int i=1;i<n+1;i++){
        for(int j=1;j<n+1;j++){
            printf("%d ",adj[i][j]);
        }printf("\n");
    }
}