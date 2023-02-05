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
void reorderList(node* &head){
        vector<int>v;
        node* res=NULL;
        node* temp=head;
        while(temp!=NULL){
            v.push_back(temp->data);
            temp=temp->next;
        }
        int start=0;int end=v.size()-1;
        while(start<end){
            insertAtTail(res,v[start]);
            insertAtTail(res,v[end]);
            start++;
            end--;
        }
        head=res;
}
int main(){
    node* head=NULL;
    for(int i=1;i<5;i++){
        insertAtTail(head,i);

    }
    reorderList(head);
    display(head);
}