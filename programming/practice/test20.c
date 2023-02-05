#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next,*prev;
};
struct node* newnode(int val){
    struct node* n=malloc(sizeof(struct node));
    n->data=val;
    n->next=n->prev=NULL;
    return n;
}
void insertion(struct node** root,int val){\
    struct node* n=newnode(val);
    if(*root==NULL){
        *root=n;
        (*root)->next=(*root)->prev=(*root);
        return ;
    }
    struct node* temp=(*root);
    struct node* tail=(*root)->prev;
    tail->next=n;
    n->prev=tail;
    n->next=(*root);
    (*root)->prev=n;
   

}void deletion(struct node** root,int val){
    struct node* tail=(*root)->prev;
    if((*root)->data==val){
        struct node* todelete=(*root);
        (*root)=(*root)->next;
        (*root)->next->prev=tail;
        tail->next=(*root);
        free(todelete);

    }struct node* temp=*root;
    while(temp->data!=val && temp->next!=(*root)){
        temp=temp->next;
    }temp->next->prev=temp->prev;
    temp->prev->next=temp->next;
}
void display(struct node* head){
    struct node* temp=head;
    while(temp->next!=head){
        printf("%d ",temp->data);
        temp=temp->next;
    }printf("%d",temp->data);
    printf("\n");
}
int main(){
    struct node* head=NULL;
    insertion(&head,1);
    insertion(&head,2);
    insertion(&head,3);
    deletion(&head,3);
    display(head);
}