#include<stdio.h>
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
    display(head);
}