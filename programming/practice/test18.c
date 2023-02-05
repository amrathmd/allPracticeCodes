#include<stdio.h>
#include<stdlib.h>
int visited[10];
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
struct adjlistnode{
    int data;
    struct adjlistnode* next;
};
struct adjlist{
    struct adjlistnode* head;
};
struct Graph{
    int v;
    struct adjlist* array;
};
struct adjlistnode* newnode(int val){
    struct adjlistnode* n=malloc(sizeof(struct adjlistnode));
    n->data=val;
    n->next=NULL;
    return n;
}
struct Graph* creatgraph(int v){
    struct Graph* graph=malloc(sizeof(struct Graph));
    graph->v=v;
    graph->array=malloc(v*sizeof(struct adjlist));
    for(int i=0;i<v;i++){
        graph->array[i].head=NULL;
    }return graph;
}
void addEdge(struct Graph* graph,int src,int dest){
    struct adjlistnode* n=newnode(dest);
    struct adjlistnode* temp=NULL;
    if(graph->array[src].head==NULL){
        n->next=graph->array[src].head;
        graph->array[src].head=n;
    }else{
        temp=graph->array[src].head;
        while(temp->next!=NULL){
            temp=temp->next;
        
        }temp->next=n;
    }n=newnode(src);
    if(graph->array[dest].head==NULL){
        n->next=graph->array[dest].head;
        graph->array[dest].head=n;
    }else{
        temp=graph->array[dest].head;
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next=n;
    }
}
void printGraph(struct Graph* graph){
    for(int i=0;i<graph->v;i++){
        printf("Adj list %d:\n",i);
        struct adjlistnode* temp=graph->array[i].head;
        while(temp!=NULL){
            printf("%d ",temp->data);
            temp=temp->next;
        }printf("\n");
    }
}void DFS(struct Graph* graph,int u){
    printf("%d ",u);
    visited[u]=1;
    struct adjlistnode* p=graph->array[u].head;
    while(p!=NULL){
        u=p->data;
        if(!visited[u]){
            DFS(graph,u);
        }p=p->next;
    }

}
void BFS(struct Graph* graph,int u){
    printf("%d ",u);
    enqueue(u);
    visited[u]=1;
    
    while(!isempty()){
        int node=queue[front];
        dequeue();
        struct adjlistnode* temp=graph->array[node].head;
        while(temp!=NULL){
            if(!visited[temp->data]){
                printf("%d ",temp->data);
                enqueue(temp->data);
                visited[temp->data]=1;
            }temp=temp->next;
        }

    }
}

int main(){
    struct Graph* graph=creatgraph(5);
    addEdge(graph,0,1);
    addEdge(graph,0,2);
    addEdge(graph,1,4);
    addEdge(graph,1,3);
    addEdge(graph,3,4);
    addEdge(graph,3,2);
    addEdge(graph,4,2);
    printGraph(graph);
    for(int i=0;i<graph->v;i++){
        visited[i]=0;
    }BFS(graph,1);

}