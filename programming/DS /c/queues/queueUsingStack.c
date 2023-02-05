#include<stdio.h>
struct queue{
    int s1[100];
    int s2[100];

}queue;
int count=0;
int top1=-1;
int top2=-1;
void push1(int val){
    queue.s1[++top1]=val;
}
void push2(int val){
    queue.s2[++top2]=val;
}
int pop1(){
    return queue.s1[top1];
    top1--;
}
int pop2(){
    return queue.s2[top2];
    top2--;
}
void enqueue(int val){
    push1(val);
    count++;

}
void dequeue(){
    for (int i=0;i<count;i++){
        push2(pop1());
    }
    pop2();
    count--;
    for(int i=0;i<count;i++){
        push1(pop2());
    }
}
void display(){
    for(int i=0;i<count;i++){
        printf("%d",queue.s1[i]);
    }
}
int main(){
    for (int i=1;i<6;i++){
        enqueue(i);
    }
    dequeue();
    display();
}