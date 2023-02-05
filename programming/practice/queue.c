#define max 10
#include<stdio.h>
int queue[max];
int front=-1,back=-1;
void enqueue(int data){
    if(front==0 && back==max-1 ||  back==(front-1)%(max-1)){
        printf("stackOverflow\n");
        return;
    }
    else if(front==-1 && back==-1){
        front=0;
        back=0;
        queue[back]=data;
    }else if(back==max-1 && front!=0){
        back=0;
        queue[back]=data;
    }
    else{
        back++;
        queue[back]=data;
    }
}
void dequeue(){
    if(front==-1){
        printf("stack Underflow");
        return;
    }
    else if(front==back){
        front=-1;
        back=-1;
    }
    else if(front==max-1){
        front=0;
    }
    else {
        front++;
    }
}
void display(){
    if(back>=front){
        for(int i=front;i<=back;i++){
            printf("%d ",queue[i]);
        }printf("\n");
    }
    else{
        for(int i=front;i<max;i++){
             printf("%d ",queue[i]);
        }
        for(int i=0;i<=back;i++){
             printf("%d ",queue[i]);
        }
    }
}
int main(){
    for(int i=1;i<11;i++){
        enqueue(i);
    }
    
    display();
}