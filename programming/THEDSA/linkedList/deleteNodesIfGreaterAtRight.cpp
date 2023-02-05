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
void swap(int* &a,int* &b){
    int temp=*a;
    *a=*b;*b=temp;
}
void insertAtTail(node* &head,int data){
    node* n=new node(data);
    node* temp=(head);
    if((head)==NULL){
        head=n;
        return;
    }
    while(temp->next!=NULL){
        temp=temp->next;

    }temp->next=n;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }cout<<"NULL"<<endl;
}
void deleteNodesIfGreaterAtRight(node* &head){
    node* prevptr=head;
    node* currptr=head->next;
    while(currptr->next!=NULL){
        if(prevptr->data < currptr->data){
            node* todelete=prevptr;
            prevptr=currptr;
            currptr=currptr->next;
            delete todelete;
        }
        else{
            currptr=currptr->next;
            prevptr=prevptr->next;
        }
    }
}
int main(){
    node* head=NULL;
    insertAtTail(head,12);
    insertAtTail(head,15);
    insertAtTail(head,10);
    insertAtTail(head,11);
    insertAtTail(head,5);
    deleteNodesIfGreaterAtRight(head);
    display(head);
}