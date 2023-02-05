#include<stdio.h>
int stack[100];
int top=-1;
void push(int val){
    top++;
    stack[top]=val;
}
void pop(){
    if(top==-1){
        printf("stack Underflown\n");
    }
    top--;
}
void Top(){
    printf("%d\n",stack[top]);
}
void Display(){
    for(int i=0;i<top;i++){
        printf("%d",stack[i]);
    }
}
int main(){
    for(int i=1;i<10;i++){
        push(i);
    }
    Top();
    pop();
    Top();
    Display();
}