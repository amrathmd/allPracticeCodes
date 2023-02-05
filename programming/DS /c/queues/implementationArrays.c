#include<stdio.h>
#define n 10
int queue[n];
int front=-1,back=-1;
void enqueue(int val){
    if(back==n-1){
        printf("queue is overFlown\n");
        return;
    }
    back++;
    queue[back]=val;
    if(front ==-1)
        front++;
}
void dequeue(){
    if(front==-1 || front>back){
        printf("queue is underflown\n");
        return ;
    }
    front++;
}
void showFront(){
    if(front==-1 || front>back){
        printf("queue is underflown\n");
        return ;
    }
    printf("%d\n",queue[front]);
}
int empty(){
    if(front==-1 || front>back){
        return 0;
    }
    else
        return 1;
}
int main(){
    for (int i=1;i<5;i++){
        enqueue(i);
    }
    showFront();
    for (int i=1;i<4;i++){
        dequeue();
    }
    showFront();
    dequeue();
    showFront();
    printf("%d\n",empty());
}