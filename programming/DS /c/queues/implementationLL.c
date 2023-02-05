#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    
    struct node* next;
};

struct node* newNode(int val){
    struct node* n=(struct node* )malloc(sizeof(struct node));
    n->data=val;
    n->next=NULL;
    return n;
}
struct node* front=NULL;
struct node* back=NULL;
void enqueue(int val){
    struct node* n=newNode(val);
    if(front==NULL){
        front=n;
        back=n;
        return;
    }
    back->next=n;
    back=n;
}
void dequeue(){
    if(front==NULL){
        printf("stack is Underflown\n");
        return;
    }
    front=front->next;
}
void showFront(){
    if(front==NULL){
        printf("the queue is underflown\n");
        return;
    }
    printf("%d\n",front->data);
}
int empty(){
    if(front==NULL);
        return 1;
    return 0;
}
int main(){
    for (int i=1;i<5;i++){
        enqueue(i);
    }
    showFront();
    for (int i=1;i<4;i++){
        dequeue();
    }
    showFront();
    dequeue();
    showFront();
    printf("%d\n",empty());
}