#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* creatNode(int data){
    struct node* n=malloc(sizeof(struct node*));
    n->data=data;
    n->next=NULL;
    return n;
}
void insert(struct node** head,int data){
    struct node* n=creatNode(data);
    if((*head)==NULL){
        (*head)=n;
        return;
    }
    struct node* temp=(*head);
    while(temp->next!=NULL){
        temp=temp->next;
    }temp->next=n;
}
void insertAtHead(struct node** head,int data){
    struct node* n=creatNode(data);
    n->next=(*head);
    (*head)=n;
}
void deletion(struct node** head,int data){
    if((*head)->data==data){
        struct node* todelete=NULL;
        todelete=(*head);
        (*head)=(*head)->next;
        free(todelete);
        return ;
    }
    struct node* temp=(*head);
    while(temp->next->data!=data && temp!=NULL){
        temp=temp->next;
    }temp->next=temp->next->next;
}
void display(struct node* head){
    struct node* temp=head;
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }printf("NULL");
    printf("\n");
}
struct node* reverseLL(struct node* head){
    struct node* currptr=head;
    struct node* prevptr=NULL;
    struct node* nextptr;
    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
    }return prevptr;
}
void func(struct node** head,struct node* head1){
    struct node* newHead=reverseLL(head1);
    struct node* temp=(*head);
    while(temp->next!=NULL){
        temp=temp->next;
    }temp->next=newHead;
}

int main(){
    struct node* head=NULL;
    struct node* head1=NULL;
    insert(&head,1);
    insert(&head,2);
    insert(&head,3);
    insert(&head,4);
    insert(&head1,5);
    insert(&head1,6);
    insert(&head1,7);
    insert(&head1,8);
    insertAtHead(&head,0);
    
    display(head1);
    func(&head,head1);
    display(head);

    

}