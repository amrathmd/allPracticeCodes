#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
void insertAtTail(struct node** head,int val){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    newnode->next=NULL;
    if((*head)==NULL){
        (*head)=newnode;
        return;
    }
    struct node* temp=(*head);
    while(temp->next!=NULL){
        temp=temp->next;
    }temp->next=newnode;
}
void Deletion(struct node** head,int val){
    struct node* todelete=(struct node*)malloc (sizeof(struct node));
    struct node* temp=(*head);  
    if((*head)->data==val){
        todelete=*head;
        *head=(*head)->next;
        free(todelete);
    }     
    while(temp->next->data!=val){
        temp=temp->next;
    }todelete=temp->next;
    temp->next=temp->next->next;
    free(todelete);
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
    Deletion(&head,3);
    Deletion(&head,1);
    display(head);

}