#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
    struct node* prev;
};
struct node* creatNode(int val){
    struct node* n=malloc(sizeof(struct node));
    n->data=val;
    n->next=n->prev=NULL;
    return n;
}
void insert(struct node** head,int data){
    struct node* n=creatNode(data);
    if((*head)==NULL){
        (*head)=n;
        return ;
    }
    struct node* temp=(*head);
    while(temp->next!=NULL){
        temp=temp->next;
    }temp->next=n;
    n->prev=temp;
}
void deleteAtHead(struct node** head,int data){
    if((*head)->next==NULL){
        struct node* todelete=NULL;
        todelete=(*head);
        (*head)=NULL;
        free(todelete);
        return ;
    }(*head)=(*head)->next;
    (*head)->prev=NULL;
}
void deletion(struct node** head,int data){
    struct node* temp=(*head);
    if(temp->data==data){
        deleteAtHead(head,data);
        return;
    }
    while(temp->data!=data && temp!=NULL){
        temp=temp->next;
    }if(temp->next==NULL)
    {
        temp->prev->next=NULL;
        return;
    }
    temp->next->prev=temp->prev;
    temp->prev->next=temp->next;
    
    
}
struct node* reverseLL(struct node** head){
    struct node* currptr=(*head);
    struct node* prevptr=NULL;
    struct node* nextptr=malloc(sizeof(struct node));;
    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;

    }return prevptr;
}
void display(struct node* head){
    struct node* temp=head;
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }printf("NULL\n");
}
int main(){
    struct node* head=NULL;
    insert(&head,1);
    insert(&head,2);
    insert(&head,3);
    insert(&head,4);
    insert(&head,5);
    deletion(&head,1);
    deletion(&head,5);
    
    display(head);
    struct node* newHead=reverseLL(&head);
    display(newHead);
    
}