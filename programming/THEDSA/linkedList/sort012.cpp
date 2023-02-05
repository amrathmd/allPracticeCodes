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

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }cout<<"NULL"<<endl;
}

void sort012(node* &head){
    node* res=NULL;
    map<int,int>mp;
    node* temp=head;
    while(temp!=NULL){
        mp[temp->data]++;
        temp=temp->next;
    }
    for(int i=0;i<mp[0];i++){
        insertAtTail(res,0);
    }
    for(int i=0;i<mp[1];i++){
        insertAtTail(res,1);
    }
    for(int i=0;i<mp[2];i++){
        insertAtTail(res,2);
    }
    head=res;
}
int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,0);
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,2);
    insertAtTail(head,0);
    insertAtTail(head,0);
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,1);
    insertAtTail(head,0);
    display(head);
    sort012(head);
    display(head);
}