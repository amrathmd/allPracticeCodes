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

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
node* reverseList(node* &head){
    node* previous=NULL;             //itererator way
    node* current=head;
    node* next_ptr;
    while(current!=NULL){
        next_ptr=current->next;
        current->next=previous;
        previous=current;
        current=next_ptr;
    }
    return previous;
}

node* recursiveHead(node* &head){//recursive way
    if(head==NULL || head->next==NULL ){
        return head;
    }
    node* newhead=recursiveHead(head->next);
    head->next->next=head;
    head->next=NULL;

    return newhead;
}



int main(){
    node* head=NULL;
    for (int i=1;i<5;i++){
        insertAtTail(head,i);
    }
    display(head);
    node* newhead=reverseList(head);
    display(newhead);
    node* newhead1= recursiveHead(newhead);
    display (newhead1);
    
}