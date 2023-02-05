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
node* removeDuplicates(node* &head){
    node* res;
    set<int >s;
    node* temp=head;

    while(temp!=NULL){
        s.insert(temp->data);
        temp=temp->next;
    }
    for(auto it=s.begin();it!=s.end();it++){
        insertAtTail(res,*it);
    }
    return res;
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
    
    node* res=removeDuplicates(head);
    display(res);
}