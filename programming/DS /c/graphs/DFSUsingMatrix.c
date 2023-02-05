#include<stdio.h>
int adj[20][20];
int visited[10];
int n;
void DFS(int i){
    printf("%d ",i);
    visited[i]=1;
    for(int j=1;j<=n;j++){
        if(adj[i][j]==1 && !visited[j]){
            DFS(j);
        }
    }
}
int main(){
    printf("Enter the number of VERTICES:");
    scanf("%d",&n);
    printf("Enter the adjacency matrix:\n");
    for(int i=1;i<=n;i++){
        visited[i]=0;
        for(int j=1;j<=n;j++){
            scanf("%d",&adj[i][j]);
        }
    }DFS(4);
}