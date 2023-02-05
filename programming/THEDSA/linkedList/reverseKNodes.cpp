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
node* reverseK(node* head,int k){
    node* prevPtr=NULL;
    node* currPtr=head;
    node* nextPtr;
    int count=0;
    while(currPtr!=NULL && count<k){
        nextPtr=currPtr->next;
        currPtr->next=prevPtr;
        prevPtr=currPtr;
        currPtr=nextPtr;
        count++;
    }
    if(nextPtr!=NULL)  head->next=reverseK(nextPtr,k);
    return prevPtr;
}

int main(){
    node* head=NULL;
    for(int i=1;i<7;i++){
        insertAtTail(head,i);
    }
    node* newHead=reverseK(head,3);
    display(newHead);
}