#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    int priority;
    struct node* next;
};
void insert(struct node** head,int data,int priority){
    struct node* n=malloc(sizeof(struct node));
    n->data=data;
    n->priority=priority;
    n->next=NULL;
    if(*head==NULL){
        *head=n;
        return;
    }
    struct node* temp=(*head);
    while(temp->next!=NULL){
        temp=temp->next;

    }temp->next=n;
}
int peek(struct node * head){
    int highestprior=-1;
    int value;
    struct node* temp=head;
    while(temp!=NULL){
        if((temp->priority) > highestprior){
            value=temp->data;
            highestprior=temp->priority;
        }
        else if((temp->priority) == highestprior){
            if((temp->data) > value ){
                value=temp->data;
            }
        }
    }return value;
}
int main(){
    struct node* head=NULL;
    insert(&head,1,4);
    insert(&head,2,3);
    insert(&head,3,3);
    printf("%d ",peek(head));
}     