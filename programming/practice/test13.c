#include<stdio.h>
#include<stdlib.h>
struct adjlistnode{
    int data;
    struct adjlistnode* next;
};
struct adjlist{
    struct adjlistnode* head;
};
struct Graph{
    int V;
    struct adjlist* array;
};
struct adjlistnode* newnode(int val){
    struct adjlistnode* n=malloc(sizeof(struct adjlistnode));
    n->data=val;
    n->next=NULL;
    return n;
}
struct Graph* creatGraph(int v){
    struct Graph* graph=malloc(sizeof(struct Graph));
    graph->V=v;
    graph->array=malloc(v*sizeof(struct adjlist));
    for(int i=0;i<v;i++){
        graph->array[i].head=NULL;
    }
    return graph;
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
    }
    n=newnode(src);
    
    if(graph->array[dest].head==NULL){
        n->next=graph->array[dest].head;
        graph->array[dest].head=n;
    }else{
        temp=graph->array[dest].head;
        while(temp->next!=NULL){
            temp=temp->next;
        }temp->next=n;
    }
}
void printGraph(struct Graph* graph){
    for(int i=0;i<graph->V;i++){
        printf("Adjacency List for %d vertices:\n",i);
        struct adjlistnode* temp=graph->array[i].head;
        while(temp!=NULL){
            printf("%d->",temp->data);
            temp=temp->next;
        }printf("\n");
    }
}
int main(){
    struct Graph* graph=creatGraph(5);
    addEdge(graph,0,1);
    addEdge(graph,0,2);
    addEdge(graph,1,2);
    addEdge(graph,1,3);
    addEdge(graph,3,4);
    addEdge(graph,4,2);
    printGraph(graph);

}
