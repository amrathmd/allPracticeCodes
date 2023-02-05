#include<iostream>
using namespace std;
class node{
    public:
        int data;
        node* next;

    node(int var){
        data=var;
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
    }
    temp->next=n;
}
void insertAtHead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
bool search(node* head,int key){
    node* temp=head;
    while(temp==NULL){
        if(temp->data==key){
            return true;
        }temp=temp->next;
    }return false;
}
void deleteAtHead(node* &head){
    if(head->next==NULL){        //only one element present in the linked list
        deleteAtHead(head);
        return;
    }
    node* todelete=head;
    head=head->next;
    delete todelete;
}
void deletion(node* &head,int val){
    node* temp= head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}

int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtHead(head,4);
    //cout<<search(head,5)<<endl;
    display(head);
    deletion(head,2);
    deleteAtHead(head);
    display(head);
    
}