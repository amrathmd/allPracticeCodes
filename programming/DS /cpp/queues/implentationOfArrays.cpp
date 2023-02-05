#include<iostream>
using namespace std;
#define n 10
class queue{
    int *arr;
    int front;
    int back;

    public:
    queue(){
        arr=new int[n];
        front=-1;
        back=-1;
    }

    void enqueue(int val){
        if(back==n-1){
            cout<<"The queue is overflown"<<endl;
            return ;
        }
        back++;
        arr[back]=val;
        if(front==-1){
            front++;
        }
    }
    void dequeue(){
        if(front==-1 || front>back){
            cout <<"queue is overflown"<<endl;
            return;
        }
        front++;
    }
    void showFront(){
        if(front==-1 || front>back){
            cout<<"queue is overflown"<<endl;
            return;
        }
        cout<<arr[front]<<endl;
    }
    bool empty(){
        if(front==-1 || front>back){
            return true;
        }
        else
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