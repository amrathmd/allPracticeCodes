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
void zigzag(node* &head){
    node* curr=head;
    bool flag=1;
    while(curr->next!=NULL){
        if(flag){
            if(curr->data > curr->next->data){
                swap(curr->data,curr->next->data);
            }
            
        }
        if(!flag){
            if(curr->data < curr->next->data){
                swap(curr->data,curr->next->data);
            }
        }curr=curr->next;
        flag=!flag;
    }
}
int main(){
    node* head=NULL;
    insertAtTail(head,11);
    insertAtTail(head,15);
    insertAtTail(head,20);
    insertAtTail(head,5);
    insertAtTail(head,10);
    zigzag(head);
    display(head);
}