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
    node* temp=head;
    if(head==NULL){
        n->next=n;
        head=n;
        return;
    }
    while(temp->next!=head){
        temp=temp->next;
    }temp->next=n;
    n->next=head;
    head=n;
}
void insertAtTail(node* &head,int val){
    node* n=new node(val);
    node* temp=head;
    
    if(head==NULL){
        insertAtHead(head,val);
        return;
    }
    while(temp->next!=head){
        temp=temp->next;
    }temp->next=n;
    n->next=head;
}
void deleteAtHead(node* &head){
    node* todelete;
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }todelete=head;
    temp->next=head->next;
    head=head->next;
    delete todelete;
}
void Deletion(node* &head,int pos){
    int count=1;
    if(pos==1){
        deleteAtHead(head);
        return;
    }
    node* temp=head;
    while(count<pos){
        temp=temp->next;
        count++;
    }
    temp->next=temp->next->next;

}
void display(node* head){
    node* temp=head;
    do{
        cout<<temp->data<<"->";
        temp=temp->next;
    }while(temp!=head);
    cout<<"NULL\n";
}
int main(){
    node* head=NULL;
    for(int i=1;i<5;i++){
        insertAtTail(head,i);
    }
    display(head);
    insertAtHead(head,5);
    display(head);
    Deletion(head,1);
    display(head);

}