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
    }cout<<"NULL"<<endl;
}

void makeCycle(node* &head,int pos){
    node* temp=head;
    node* startNode;
    int count=1;
    while(temp->next!=NULL){
        if(count==pos){
            startNode=temp;
        }
        temp=temp->next;
        count=count+1;
    }temp->next=startNode;
}
bool detectCycle(node* head){
    node* slowptr=head;
    node* fastptr=head;

    while(fastptr!=NULL && fastptr->next!=NULL){//HARE AND TORTIOSE ALGO
        slowptr=slowptr->next;
        fastptr=fastptr->next->next;

        if(slowptr==fastptr){
            return true;
        }
    }return false;
}

void removeCycle(node* &head){
    node* slowptr=head;
    node* fastptr=head;
        do{
            slowptr=slowptr->next;
            fastptr=fastptr->next->next;
        }while(fastptr!=slowptr);

        fastptr=head;
        while(slowptr->next!=fastptr->next){
            slowptr=slowptr->next;
            fastptr=fastptr->next;
        }slowptr->next=NULL;
}

int main(){
    node* head=NULL;
    for (int i=1;i<6;i++){
        insertAtTail(head,i);
    }display (head);
    makeCycle(head,3);
    cout<<detectCycle(head)<<endl;
    removeCycle(head);
    display(head);
}
