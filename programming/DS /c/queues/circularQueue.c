#include<stdio.h>
#define max 5
int arr[max];
int front=-1,rear=-1;
void insert(int val){
    if((front==0 && rear==max-1) || rear==(front-1)%(max-1)){
        printf("The queue is overflown\n");
        return;
    }
    else if (front==-1 && rear==-1){
        front=0;
        rear=0;
        arr[front]=val;
    }
    else if (rear==max-1 && front!=0){
        rear=0;
         arr[rear]=val;
    }
    else{
        rear++;
        arr[rear]=val;
    }
}
void delete(){
    if(front==-1){
        printf("the queue is underflown\n");
        return;
    }
    else if(front==max-1 ){
        front=0;
    }
    else if (front==rear){
        front=-1;
        rear=-1;
    }
    else{
        front++;
    }
}
void display(){
    if(rear>=front){
        for(int i=front;i<=rear;i++){
            printf("%d ",arr[i]);
        }printf("\n");
    }
    else{
        for(int i=front;i<max;i++){
             printf("%d ",arr[i]);
        }
        for(int i=0;i<=rear;i++){
             printf("%d ",arr[i]);
        }
    }
}
void showFront(){
    printf("%d\n",arr[front]);
}
int main(){
    for(int i=1;i<5;i++){
        insert(i);
    }
    display();
    delete();
    display();
    insert(5);
    display();
    showFront();
}