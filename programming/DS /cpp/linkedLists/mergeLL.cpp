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
    }cout<<"NULL\n";
}
int length(node* head){
    node* temp=head;
    int l=0;
    while(temp!=NULL){
        temp=temp->next;
        l++;
    }return l;
}
node* mergeSortedLL(node* &head1,node* &head2){
    node* p1=head1;
    node* p2=head2;
    node* dummynode=new node(-1);
    node* p3=dummynode;
    while(p1!=NULL && p2!=NULL){
        if(p1->data < p2->data){
            p3->next=p1;
            p1=p1->next;
        }
        else{
            p3->next=p2;
            p2=p2->next;
        }p3=p3->next;
        
        
    }while(p1!=NULL){
            p3->next=p1;
            p1=p1->next;
            p3=p3->next;
    }
    while(p2!=NULL){
        p3->next=p2;
        p2=p2->next;
        p3=p3->next;
    }
    return dummynode->next;
}
int main(){
    node* head1=NULL;
    node* head2=NULL;
    int arr1[]={2,4,6};
    int arr2[]={1,3,5,7};
    for(int i=0;i<(sizeof(arr1)/sizeof(int));i++){
        insertAtTail(head1,arr1[i]);
    }
    for(int i=0;i<(sizeof(arr2)/sizeof(int));i++){
        insertAtTail(head2,arr2[i]);
    }
    node* newhead=mergeSortedLL(head1,head2);
    display(newhead);

}