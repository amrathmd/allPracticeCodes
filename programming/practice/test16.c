#include<stdio.h>
int adj[20][20],visited[10],n;
int queue[100];
int front=-1,rear=-1;
void enqueue(int val){
    if(front==-1){
        front=rear=0;
        queue[rear]=val;
    }else{
        rear++;
        queue[rear]=val;
    }
}
void dequeue(){
    
    if(front==rear){
        front=rear=-1;
    }
    else
        front++;
}
int isempty(){
    if(front==-1 && rear==-1){
        return 1;
    }else 
        return 0;
}
void BFS(int i){
    enqueue(i);
    printf("%d ",i);
    visited[i]=1;
    int j;
    while(!isempty()){
        int node=queue[front];
        dequeue();
        for(j=0;j<n;j++){
            if(adj[node][j]==1 && !visited[j]){
                printf("%d ",j);
                visited[j]=1;
                enqueue(j);
        }
    }
    }
    
}
int main(){
    int v;
    printf("Enter the number of vertices:");
    scanf("%d",&v);
    n=v;
    printf("Enter the adjacent matrix:");
    for(int i=0;i<n;i++){
        visited[i]=0;
        for(int j=0;j<n;j++){
            scanf("%d",&adj[i][j]);
        }
    }BFS(0);
}