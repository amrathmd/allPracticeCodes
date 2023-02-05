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
class queue{
    public:
    node* front;
    node* back;

    queue(){
        front=NULL;
        back=NULL;
    }

    void enqueue(int val){
        node* n=new node(val);
        if(front==NULL){
            front =n;
            back=n;
            return;
        }
        back->next=n;
        back=n;
    }
    void dequeue(){
        if(front==NULL){
            cout<<"queue underflown"<<endl;
            return;
        }
        front=front->next;
    }
    void showFront(){
        if(front==NULL){
            cout<<"NULL queue"<<endl;
            return;
        }
        cout<<front->data<<endl;
    }
    bool empty(){
        if(front==NULL){
            return true;
        }
        return false;
    }
};
int main(){
    queue q;
    for(int i=1;i<5;i++){
        q.enqueue(i);
    }
    q.showFront();
    q.dequeue();
    q.showFront();
    q.dequeue();
    q.showFront();
    q.dequeue();
    q.showFront();
     q.dequeue();
    q.showFront();
    cout<<q.empty()<<endl;
}