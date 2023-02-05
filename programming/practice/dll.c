#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node{
    char data[10];
    struct node* next;
    struct node* prev;
};
void Deletion(struct node** head,char a[]){
    struct node* temp=(*head);
    if(strcmp((*head)->data,a)==0){
        (*head)=(*head)->next;
        (*head)->prev=NULL;
        return;
    }
    while(strcmp(temp->data,a)!=0 && temp->next!=NULL){
        temp=temp->next;
    }if(temp->next==NULL){
        temp->prev->next=NULL;
        return;
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
}
void insertAtHead(struct node** head,char a[]){
    struct node* n=malloc(sizeof(struct node));
    strcpy(n->data,a);
    n->next=NULL;
    n->prev=NULL;
    if((*head)==NULL){
        (*head)=n;
        return;
    }
    (*head)->prev=n;
    n->next=(*head);
    (*head)=n;
}
void insertAtTail(struct node** head,char a[]){
    if(*head==NULL){
        insertAtHead(head,a);
        return; 
    }
    struct node* n=malloc(sizeof(struct node));
    strcpy(n->data,a);
    n->next=NULL;
    n->prev=NULL;
    struct node* temp=(*head);
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;

}
void display(struct node* head){
    struct node* temp=head;
    while(temp!=NULL){
        puts(temp->data);
        temp=temp->next;
    }
    printf("\n");
    

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
    insertAtHead(&head,"shoheb");
    insertAtTail(&head,"Amrath");
    insertAtTail(&head,"mudabbir");
    insertAtTail(&head,"Ejaaz");
    insertAtTail(&head,"Sohail");
    Deletion(&head,"mudabbir");
    display(head);
    struct node* newHead=reverseIter(&head);
    display(newHead);
    
    }