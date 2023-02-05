#include<iostream>
using namespace std;
class node{
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};
node* top=NULL;
bool isempty(){
    if(top==NULL)
        return true;
    else
        return false;
}
void push(int val){
    node*n=new node(val);
    n->next=top;
    top=n;
}
void pop()
{
    if(isempty)
        cout << "stack is empty"<<endl;
    else{
        node* n=top;
        top=top->next;
        delete(n);
    }
} 
void showTop(){
    if(empty()){
        cout <<"stack is empty"<<endl;
    }
    else{
        cout<<top->data<<endl;
    }
}
int main(){
    push(1);
    push(2);
    push(3);
    showTop();
    pop();
    showTop();
}