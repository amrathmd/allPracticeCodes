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
void insertAtHead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}
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
    }cout<<"NULL"<<endl;
}
bool search(node* head,int key){
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }temp=temp->next;
    }return false;
}
void deletion(node* &head,int val){
    node* temp=head;
    node* todelete;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}
void deleteAtHead(node* &head){
    node* temp=head;
    node* todelete=temp;
    head=temp->next;
    delete todelete;
}
int main()
{
    node* head=NULL;
    for(int i=1;i<4;i++){
        insertAtTail(head,i);
    }
    insertAtHead(head,0);
    display(head);
    cout<<search(head,1)<<endl;
    deletion(head,3);
    deleteAtHead(head);
    display(head);
}
