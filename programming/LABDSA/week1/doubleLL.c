#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
    struct node* prev;
};
void insertAtHead(struct node** head,int val){
    struct node* n=(struct node*)malloc(sizeof(struct node));
    n->data=val;
    n->next=(*head);
    n->prev=NULL;
    if((*head)!=NULL){
        (*head)->prev=n;
    }
    
    (*head)=n;
}
void insertAtTail(struct node** head,int val){
    if((*head)==NULL){
        insertAtHead(head,val);
        return;
    }
    struct node* n=(struct node*)malloc(sizeof(struct node));
    n->data=val;
    n->next=NULL;
    struct node* temp=(*head);
    while(temp->next!=NULL){
        temp=temp->next;
    }temp->next=n;
    n->prev=temp;
    return;
}
void deleteAtHead(struct node** head){
    struct node* todelete;
    if((*head)->next==NULL){
        todelete=(*head);
        head=NULL;
        free(todelete);
        return;
    }
    (*head)->next->prev=NULL;
    (*head)=(*head)->next;

}
void Deletion(struct node** head,int pos){
    if(pos==1){
        deleteAtHead(head);
        return;
    }
    int count=1;
    struct node* temp=(*head);
    while(temp!=NULL && count!=pos){
        temp=temp->next;
        count++;
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
}
void display(struct node* head){
    struct node* temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    };
    printf("NULL\n");
}
int main(){
    struct node* head=NULL;
    for(int i=1;i<5;i++){
        insertAtTail(&head,i);
    }
    insertAtHead(&head,5);
    display(head);
    Deletion(&head,1);
    display(head);
}