#include<stdio.h>
struct queue{
    int s1[100];
    int s2[100];
}q;
int top1=-1,top2=-1;
void push1(int val){
    top1++;
    q.s1[top1]=val;
}
int pop1(){
    int element= q.s1[top1];
    top1--;
    return element;
}
void push2(int val){
    top2++;
    q.s2[top2]=val;
}
int pop2(){
    int element= q.s2[top2];
    top2--;
    return element;
}
int count=0;
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
        printf("%d ",q.s1[i]);
    }printf("\n");
}
int main(){
    for(int i=1;i<6;i++){
        enqueue(i);
    }
    dequeue();
    display();
    dequeue();
    display();
    enqueue(3);
    enqueue(4);
    dequeue();
    display();


}