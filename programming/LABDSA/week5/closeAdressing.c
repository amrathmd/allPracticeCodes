#include<stdio.h>
#include<stdlib.h>
#define tableSize 10
struct node{
    int data;
    struct node* next;
};
struct node* chain[tableSize];
void insert(int key){
    int index=key%tableSize;
    struct node* n=malloc(sizeof(struct node));
    n->data=key;
    n->next=NULL;
    if(chain[index]==NULL){
        chain[index]=n;
        return;
    }
    struct node* temp=chain[index];
    while(temp->next!=NULL){
        temp=temp->next;
    }temp->next=n;
}
void delete(int key){
    int index=key%tableSize;
    if(chain[index]->data==key){
        struct node* todelete=chain[index];
        chain[index]=chain[index]->next;
        free(todelete);
        return;
    }
    struct node* temp=chain[index];
    while(temp->next->data!=key && temp->next!=NULL){
            temp=temp->next;
    }if(temp->next==NULL){
        printf("key not found!");
    }
    else
        temp->next=temp->next->next;
}
void display(){
    for(int i=0;i<tableSize;i++){
        struct node* temp=chain[i];
        printf("Hash[%d]::",i);
        while(temp!=NULL){
            printf("%d->",temp->data);
            temp=temp->next;
        }printf("NULL\n");
    }
}

int main(){
    for(int i=0;i<tableSize;i++){
        chain[i]=NULL;
    }for(int i=1;i<10;i++){
        insert(i);
    }insert(22);
    display();
    delete(22);
    delete(1);
    display();
    

}