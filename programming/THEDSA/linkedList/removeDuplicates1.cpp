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
void removeDuplicates(node* head){
    unordered_set<int>s;
    node* currPtr=head;
    node* prevPtr=NULL;
    while(currPtr!=NULL){
        if(s.find(currPtr->data)!=s.end()){
            
            prevPtr->next=currPtr->next;
            delete currPtr;
        }
        else{
            s.insert(currPtr->data);
            prevPtr=currPtr;
            
        }currPtr=prevPtr->next;
    }
    
}
int main(){
    node* head=NULL;
    for(int i=1;i<6;i++){
        insertAtTail(head,i);
    }

    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    display(head);
   
    
    removeDuplicates(head);
    display(head);
}