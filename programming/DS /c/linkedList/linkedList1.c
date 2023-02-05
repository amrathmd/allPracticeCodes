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
void insertAtHead(struct node** head,int val){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    newnode->next=*head;
    *head=newnode;
}
void insertAtPosition(struct node** head,int val,int pos){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    struct node* temp=(*head);
    newnode->data=val;
    int kpos=1;
    while(kpos<pos && temp->next!=NULL){
        temp=temp->next;
        kpos++;
    }
    newnode->next=temp->next;
    temp->next=newnode;
   
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
    for(int i=1;i<5;i++){
        insertAtTail(&head,i);
    }
    display(head);
    insertAtHead(&head,0);
    display (head);
    insertAtPosition(&head,4,3);
    display(head);
}