#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node* next;
        node* prev;
        node(int val){
            data=val;
            next=prev=NULL;

        }
};
void insertAtTail(node** head,int data){
    node* n=new node(data);
    if((*head)==NULL){
        *head=n;
        return ;
    }
    node* temp=*head;
    while(temp->next!=NULL){
        temp=temp->next;

    }temp->next=n;
    n->prev=temp;

}
void insertAtHead(node** head,int data)
{
    node* n=new node(data);
    if(*head==NULL){
        *head=n;
        return;
    }n->next=*head;
    (*head)->prev=n;
    *head=n;

}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }cout<<"NULL"<<endl;
}
void deleteAtHead(node* &head){
    node* todelete=head;
    if(head->next==NULL){
        delete head;
        return;
    }
    head=head->next;
    delete todelete;
}
void Deletion(node* &head,int data){
    if(head->data==data){
        deleteAtHead(head);
        return ;
    }
    node* temp=head;
    while(temp->data!=data){
        temp=temp->next;
    }
    if(temp->next==NULL){
        temp->prev->next=NULL;
        return;
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
}


node* reverseLinkedList(node* head){
    node* nextPtr;
    node* prevPtr=NULL;
    node* currPtr=head;
    while(currPtr!=NULL){
        nextPtr=currPtr->next;
        currPtr->next=prevPtr;
        prevPtr=currPtr;
        currPtr=nextPtr;
    }
    return prevPtr;
}

int main(){
    node* head=NULL;
    insertAtHead(&head,1);
    insertAtTail(&head,2);
    insertAtTail(&head,3);
    insertAtTail(&head,4);
    insertAtTail(&head,5);
   
    display(head);
    Deletion(head,3);
    display(head);
    node* newHead=reverseLinkedList(head);
    //display(newHead);

}