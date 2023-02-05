#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node{
    char data[10];
    struct node* next;
};
void insertAtHead(struct node** head,char a[]){
    struct node* n=malloc (sizeof(struct node));
    strcpy(n->data,a);
    n->next=NULL;
    if((*head)==NULL){
        *head=n;
        return;
    }
    n->next=(*head);
    (*head)=n;
}
void insertAtTail(struct node** head,char a[]){
    struct node* n=malloc(sizeof(struct node));
    strcpy(n->data,a);
    n->next=NULL;
    if((*head)==NULL){
        *head=n;
        return;       
    }
    struct node* temp=(*head);
    while(temp->next!=NULL){
        temp=temp->next;
    }temp->next=n;
}
void Display(struct node *head){
    struct node* temp=(head);
    while(temp!=NULL){
        puts(temp->data);
        temp=temp->next;
    }
    printf("\n");
}
void deletion(struct node** head,char a[]){
    struct node* temp=(*head);
    struct node* todelete;
    if((strcmp((*head)->data,a)==0)){
        (*head)=(*head)->next;
        return;
    }
    while(strcmp(temp->next->data,a)!=0 && temp!=NULL){
        temp=temp->next;
    }todelete=temp->next;
    
    temp->next=temp->next->next;
    free(todelete);
}
struct node* reverseLL(struct node** head){
    struct node* nextptr=malloc(sizeof(struct node*));
    struct node* prevptr=NULL;
    struct node* currptr=(*head);
    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
    }
    return prevptr;
}
int main(){
    struct node* head=NULL;
    insertAtTail(&head,"amrath");
    insertAtTail(&head,"shoheb");
    insertAtTail(&head,"shiva");
     insertAtTail(&head,"RUman");
      insertAtTail(&head,"Muda");
    Display(head);
    deletion(&head,"amrath");
    insertAtHead(&head,"Sohail");
    Display(head);
    struct node* newhead=reverseLL(&head);
    Display(newhead);
    
    
    
}