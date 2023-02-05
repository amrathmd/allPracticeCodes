#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* top=NULL;
struct node* newNode(int val){
    struct node* n=malloc(sizeof(struct node));
    n->data=val;
    n->next=top;
    return n;
}
void push(int val){
    struct node* n=newNode(val);
    if(top==NULL){
        top=n;
        return;
    }n->next=top;
    top=n;
}
void pop(){
    top=top->next;
}
void Top(){
    printf("%d\n",top->data);
}
void display(){
    struct node* temp=top;
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }printf("\n");
}
int main(){
    for(int i=1;i<10;i++){
        push(i);
    }
    Top();
    pop();
    Top();
    display();

}