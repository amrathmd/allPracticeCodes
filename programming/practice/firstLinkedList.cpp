#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node* next;

        node(int val){
            data=val;
            next=NULL;
        }
};
void insertAtTail(node** head,int data){
    node* n=new node(data);
    node* temp=(*head);
    if(*(head)==NULL){
        *head=n;
        return;
    }
    while(temp->next!=NULL){
        temp=temp->next;

    }temp->next=n;
}
void display(node* head)
{
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
void insertAtHead(node** head,int data){
    node* n=new node(data);
    if(*head==NULL){
        *head=n;
        return;
    }
    n->next=*head;
    *head=n;

}
void deleteAtHead(node** head){
    node* todelete=(*head);
    if((*head)->next==NULL){
        (*head)=NULL;
        return;
    }
    (*head)=(*head)->next;
    delete todelete;
}
void deletion(node** head,int data){
    if((*head)->data==data){
        deleteAtHead(head);
        return;
    }
    node* temp=*head;
    while(temp->next->data!=data){
        temp=temp->next;
    }
    temp->next=temp->next->next;
}
node* reverseLinkedList(node* head){
    node* nextNode;
    node* prevNode=NULL;
    node* currNode=head;
    while(currNode!=NULL){
        nextNode=currNode->next;
        currNode->next=prevNode;
        prevNode=currNode;
        currNode=nextNode;

    }return prevNode;

}
int main(){
    node* head=NULL;
    insertAtTail(&head,1);
    insertAtTail(&head,2);
    insertAtHead(&head,6);
    insertAtTail(&head,3);
    insertAtTail(&head,4);
    insertAtHead(&head,5);
    
    display(head);
    node* newHead=reverseLinkedList(head);
    deletion(&newHead,4);
    display(newHead);
}