#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define n 100
int stack[n];
int top=-1;
void push(int val){
    if(top>=n-1){
        printf("stackOverflow\n");
        return;
    }top++;
    stack[top]=val;
}
void pop(){
    if(top<0){
        printf("StackUndeflow\n");
    }
    else
        top--;
}
void Top(){
    printf("%d\n",stack[top]);
}
int main(){
    for(int i=1;i<3;i++){
        push(i);
    }
    Top();
    pop();
    pop();

    Top();
}