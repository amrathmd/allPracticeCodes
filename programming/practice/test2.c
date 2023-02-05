#include<stdio.h>
#include<stdlib.h>

struct node
{
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
void insertAtHead(struct node** head,int val){
    struct node* n=creatNode(val);
    if((*head)==NULL){
        n->next=n;
        n->prev=n;
        (*head)=n;
        
        return;
    }struct node* tail=(*head)->prev;
    n->next=(*head);
    n->prev=tail;
    tail->next=n;
    (*head)->prev=n;
    (*head)=n;

    
}
void insertAtTail(struct node** head,int val){
    struct node* temp=(*head);
    struct node* tail=(*head)->prev;
    if(*head==NULL){
        insertAtHead(head,val);
        return;
    }struct node* n=creatNode(val);
    n->prev=tail;
    tail->next=n;
    (*head)->prev=n;
    n->next=(*head);

}
void display(struct node* head){
    struct node* temp=head;
    while(temp->next != head){
        printf("%d->",temp->data);
        temp=temp->next;
    }printf("%d\n",temp->data);
}
void deletion(struct node** head,int data){
    struct node* tail=(*head)->prev;
    struct node* temp=(*head);
    if(temp->data==data){
        struct node* todelete=(*head);
        (*head)=(*head)->next;
        (*head)->prev=(tail);
        (tail->next)=(*head);
        free(todelete);
        return;

    }while(temp->data!=data && temp->next!=(*head)){
        temp=temp->next;
    }
    if(temp->next==(*head)){
        tail->prev->next=(*head);
        (*head)->next=tail->prev;
        tail=tail->prev;
        return;
    }temp->next->prev=temp->prev;
    temp->prev->next=temp->next;
}
int main(){
    struct node* head=NULL;
    insertAtHead(&head,1);
    insertAtHead(&head,2);
    insertAtHead(&head,3);
    insertAtHead(&head,5);
    insertAtTail(&head,4);
    deletion(&head,4);
    display(head);
}