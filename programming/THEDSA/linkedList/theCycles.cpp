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
void makecycle(node* &head){
    node* temp=head;
    while(temp->next!=NULL) temp=temp->next;
    temp->next=head;
}
bool detectCycle(node* head){
    node *fast,*slow;
    fast=slow=head;
    while(fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow){
            return true;
        }
    }return false;
}

int main(){
    node* head=NULL;
    for(int i=1;i<6;i++){
        insertAtTail(head,i);
    }
    makecycle(head);

    cout<<detectCycle(head)<<endl;
    display(head);
}