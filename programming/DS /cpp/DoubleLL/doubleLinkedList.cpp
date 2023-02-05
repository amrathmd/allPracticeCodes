#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;
    
    
    node(int va;){
        data=val;
        next=NULL;
        prev=NULL;
    }
};
void insertAtHead(node* &head,int val){
    node* n = new node(val);
    n->next=head;
    if(head->next!=NULL){
        head->prev=n;
    }

    head=n;
}
void insertAtTail(node* &head,int val){
    if(head==NULL){
        insertAtHead(head,val);
    }
    node* n=new node(val);
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }temp->next=n;
    n->prev=temp;
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){

}