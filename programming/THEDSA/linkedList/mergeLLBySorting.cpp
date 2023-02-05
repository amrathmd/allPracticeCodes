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
node* mergeLL(node* list1,node* list2){
    node* res=NULL;
    node* temp1=list1;
    
    node* temp2=list2;
    while(temp1!=NULL && temp2!=NULL){
        if(temp1->data <= temp2->data){
            insertAtTail(res,temp1->data);
            temp1=temp1->next;
        }
        else{
            insertAtTail(res,temp2->data);
            temp2=temp2->next;
        }
    }
    while(temp1!=NULL){
        insertAtTail(res,temp1->data);
        temp1=temp1->next;
    }
    while(temp2!=NULL){
        insertAtTail(res,temp2->data);
        temp2=temp2->next;
    }
    return res;
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }cout<<"NULL"<<endl;
}
int main(){
    node* list1=NULL;
    for(int i=6;i<11;i++){
        insertAtTail(list1,i);
    }
    node* list2=NULL;
    for(int i=0;i<=6;i++){
        insertAtTail(list2,i);
    }
    node* res=mergeLL(list1,list2);
    display(res);

}