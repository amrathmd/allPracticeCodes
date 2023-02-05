#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;

};
struct node* front=NULL;
struct node* rear=NULL;
void enqueue(int val){
    struct node* n=malloc(sizeof(struct node));
    n->data=val;
    n->next=NULL;
    if(front==NULL && rear==NULL){
        front=n;
        rear=n;
        return;
    }
    rear->next=n;
    rear=n;
}
void dequeue(){
    struct node* todelete=front;
    front=front->next;
    free(todelete);
}
void POP(){
    printf("%d",front->data);
}
int main(){
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    POP();
    dequeue();
    POP();
    

}