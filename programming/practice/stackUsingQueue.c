#include<stdio.h>
struct stack{
    int q1[100];
    int q2[100];
}s;
int count=0;
int front1=-1,rear1=-1,front2=-1,rear2=-1;
void enqueue1(int val){
    if(front1==-1){
        front1=0;
        rear1=0;
        s.q1[rear1]=val;
    }else{
        rear1++;
        s.q1[rear1]=val;
    }
}
int dequeue1(){
    return s.q1[front1];
    front1++;
}
void enqueue2(int val){
    if(front2==-1){
        front2=0;
        rear2=0;
        s.q2[front2]=val;
    }
    else{
        rear2++;
        s.q2[rear2]=val;
    }
}
int dequeue2(){
    return s.q2[front2];
    front2++;
}
void push(int val){
    enqueue1(val);
    count++;
}
void pop(){
    for(int i=1;i<count;i++){
        enqueue2(dequeue1());
    }dequeue1();
    count--;
    for(int i=0;i<count;i++){
        enqueue1(dequeue2());
    }
}
void display(){
    for(int i=0;i<count;i++){
        printf("%d ",s.q1[i]);
    }
    printf("\n");
}
int main(){
    for(int i=1;i<5;i++){
        push(i);
    }
    display();
    pop();
    display();
    push(5);
    push(6);
    display();
}