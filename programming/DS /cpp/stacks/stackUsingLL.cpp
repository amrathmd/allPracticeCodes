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
node* top=NULL;
void push(int val){

    node* n=new node(val);
    if(top==NULL){
        top=n;
        return;
    }
    n->next=top;
    top=n;
}
bool empty(){
    if(top==NULL)
        return true;
    return false;
}
void pop(){
    if(empty()){
        cout<<"stack is empty\n";
        return ;
    }
    node* temp=top;
    top=top->next;
    delete temp;
}
void showTop(){
    cout<<top->data<<endl;
}
void display(){
    node* temp=top;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    for(int i=1;i<5;i++){
        push(i);
    }
    showTop();
    display();
    pop();
    showTop();
    cout<<empty()<<endl;
}