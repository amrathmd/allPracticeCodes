#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};
struct node* top=NULL;
void enqueue(int val){
    struct node* n=malloc(sizeof(struct node));
    n->data=val;
    n->next=NULL;
    if(top==NULL){
        top=n;
        return;
    }
    n->next=top;
    top=n;
}
void dequeue(){
    if(top==NULL){
        printf("UNDERFLOWN");
        return;
    }
    top=top->next;
}
void display(){
    printf("%d",top->data);
}
int main(){
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    dequeue();
    
    display();
}