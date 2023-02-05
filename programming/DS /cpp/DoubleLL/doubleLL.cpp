#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;
    
    
    node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};
void insertAtHead(node* &head,int val){
    node* n = new node(val);
    n->next=head;
    if(head!=NULL){
        head->prev=n;
    }

    head=n;
}
void insertAtTail(node* &head,int val){
    if(head==NULL){
        insertAtHead(head,val);
        return;
    }
    node* n=new node(val);
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }temp->next=n;
    n->prev=temp;
}
void deleteAtHead(node* &head){
    node* todelete;
    if(head->next==NULL){
        todelete=head;
        head=NULL;
        delete todelete;
        return;
    }
    head->next->prev=NULL;
    head=head->next;
}
void Deletion(node* &head,int pos){
    int count=1;
    if(pos==1){
        deleteAtHead(head);
        return;
    }
    node* temp=head;
    while(temp!=NULL && count!=pos){
        temp=temp->next;
        count++;
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    node* head=NULL;
    for (int i=1;i<5;i++){
        insertAtTail(head,i);
    }
    display (head);
    insertAtHead(head,5);
    display(head);
    Deletion(head,1);
    display(head);
}