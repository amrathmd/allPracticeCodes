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
void makecycle(struct node** head,int pos){
    int count=1;
    struct node* startNode=(struct node*)malloc(sizeof(struct node));
    struct node* temp=(*head);
    while(temp->next!=NULL){
        if(count==pos){
            startNode=temp;
        }
        temp=temp->next;
        count++;
        }
        temp->next=startNode;
}
int detectCycle(struct node* head){
    struct node* slowptr=head;
    struct node* fastptr=head;
    while(fastptr!=NULL && fastptr->next!=NULL){
        slowptr=slowptr->next;
        fastptr=fastptr->next->next;
        if(fastptr==slowptr)
            return 1;
        else
            return 0;
    }
}
int main(){
    struct node* head=NULL;
    for(int i=1;i<6;i++){
        insertAtTail(&head,i);
    }
    display(head);
    makecycle(&head,2);
    printf("%d\n",detectCycle(head));
}