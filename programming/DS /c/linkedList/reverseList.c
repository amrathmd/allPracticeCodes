#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
void insertAtTail(struct node** head,int val){
    struct node* newnode;
    struct node* temp=(*head);
    newnode=(struct node*) malloc(sizeof(struct node));
    newnode->data=val;
    newnode->next=NULL;
    if(*head==NULL){
        (*head)=newnode;
        return;
    }
    while(temp->next!= NULL){
        temp=temp->next;
    }temp->next=newnode;
}
void display(struct node* head){
    struct node* temp=head;
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }printf("NULL\n");
}
struct node* reverseIter(struct node** head){
    struct node* prevptr=NULL;
    struct node* currptr=(*head);
    struct node* nextptr=(struct node*)malloc(sizeof(struct node));
    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
    }return prevptr;
}
int main(){
    struct node* head=NULL;
    for(int i=1;i<5;i++){
        insertAtTail(&head,i);
    }
    display(head);
    struct node* newhead=reverseIter(&head);
    display(newhead);
}