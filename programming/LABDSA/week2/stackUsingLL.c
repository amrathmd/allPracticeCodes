#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* top=NULL;
struct node* creatNode(int val){
    struct node* n=(struct node*)malloc(sizeof(struct node));
    n->data=val;
    n->next=NULL;
    return n;
}
void push(int val){
    struct node* n=creatNode(val);
    if(top==NULL){
        top=n;
    }
    else{
        n->next=top;
        top=n;
    }
}
void showTop(){
    printf("%d\n",top->data);
}
int empty(){
    return (top==NULL);
}
void pop(){
    if(top==NULL){
        printf("stackUnerflow\n");
    }
    else
        top=top->next;
}
void display(){
    struct node* temp;
    temp=top;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
        }
int main(){
    push(1);
    push(2);
    push(3);
    display();
    showTop();
    pop();
    showTop();
    display();
    push(4);
    showTop();
    display();
}