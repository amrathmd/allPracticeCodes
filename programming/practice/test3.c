#define max 5
#include<stdio.h>
int queue[5];
int front=-1;
int rear=-1;
void enqueue(int val){
    if(front==-1 && rear==-1){
        front++;
        rear++;
        queue[rear]=val;
    }
    else if(front==0 && rear==max-1 || rear==(front-1)%(max-1)){
        printf("Overflown");
    }else if(rear==max-1 && front!=0){
        rear=0;
        queue[rear]=val;
    }else {
        rear++;
        queue[rear]=val;
    }
}
void dequeue(){
    if(front==-1 && rear==-1){
        printf("queueunderflown");
    }else if(front==rear){
        front=-1;
        rear=-1;
    }else if(front==max-1){
        front=0;
    }else {
        front++;
    }
}
void display(){
    if(rear>=front){
        for(int i=front;i<=rear;i++){
            printf("%d",queue[i]);
        }
    }else{
        for(int i=front;i<max;i++){
            printf("%d",queue[i]);
        }
        for(int i=0;i<=rear;i++){
            printf("%d",queue[i]);
        }
    }
}
int main(){
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    dequeue();
    dequeue();
    dequeue();

    enqueue(1);
    enqueue(2);
    display();

}