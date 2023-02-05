#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node{
    char data;
    struct node* next;
};
void insertAtHead(struct node** head,int val){
    struct node* n=malloc(sizeof(struct node));
    struct node* temp=(*head);
    n->data=val;
    n->next=NULL;
    while(temp->next!=(*head)){
        temp=temp->next;
    }
    temp->next=n;
    n->next=(*head);
    (*head)=n;
}

void insertAtTail(struct node** head,int a){
    struct node* n=malloc(sizeof(struct node));
    n->data=a;
    n->next=NULL;
    if((*head)==NULL){
        *head=n;
        (*head)->next=(*head);
        return;       
    }
    struct node* temp=(*head);
    while(temp->next!=(*head)){
        temp=temp->next;
    }temp->next=n;
    n->next=(*head);
}
void Display(struct node *head){
    struct node* temp=(head);
   while(temp->next!=NULL){
       printf("%d",temp->data);
       temp=temp->next;
       
   }
    printf("\n");
}

int main(){
    struct node* head=NULL;
    insertAtTail(&head,1);
    insertAtTail(&head,2);
    insertAtTail(&head,3);
    insertAtHead(&head,4);
    Display(head);
}