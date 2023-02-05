#include<iostream>
#include<bits/stdc++.h>
using namespace std;
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

void display(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }cout<<"NULL"<<endl;
}
void segreagateEvenOdd(node* &head){
    node* end=head; //endpointer;
    while(end->next!=NULL) end=end->next;
    node* temp=head;
    node* newEnd=end;
    while(temp->data % 2 !=0 && temp!=NULL){
        newEnd->next=temp;
        temp=temp->next;
        newEnd->next->next=NULL;
        newEnd=newEnd->next;
    }
    node* curr=temp;
    node* prev;
    if(temp->data%2==0){
        while(temp!=end){
        if(temp->data%2==0){
            prev=temp;
            temp=temp->next;
        }
        while(temp->next!=NULL && temp->data%2!=0){
            prev->next=temp->next;
            newEnd->next=temp;
            temp=temp->next;
            newEnd->next->next=NULL;
            newEnd=newEnd->next;
        }
    }
    }
    else  curr=prev;
}
int main(){
    node* head=NULL;
    insertAtTail(head,8);
    insertAtTail(head,12);
    insertAtTail(head,14);
    insertAtTail(head,5);
    insertAtTail(head,3);
    insertAtTail(head,32);
    display(head);
    segreagateEvenOdd(head);
    display(head);
}