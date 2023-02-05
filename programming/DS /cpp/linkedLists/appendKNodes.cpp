#include<iostream>
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
void insertAtTail(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }temp->next=n;
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }cout<<"NULL\n";
}
int length(node* head){
    node* temp=head;
    int l=0;
    while(temp!=NULL){
        temp=temp->next;
        l++;
    }return l;
}
void appendKNodes(node* &head,int k){
    node* newhead;
    node* newtail;
    node* tail=head;
    int l=length(head);
    int count=1;
    while(tail->next!=NULL){
        if(count==(l-k)){
            newtail=tail;
        }
        if(count==(l-k+1)){
            newhead=tail;
        }tail=tail->next;
        count++;
    }
    newtail->next=NULL;
    tail->next=head;
    head=newhead;
}
int main(){
    node* head=NULL;
    for(int i=1;i<8;i++){
        insertAtTail(head,i);
    }
    display (head);
    appendKNodes(head,3);
    display(head);

}