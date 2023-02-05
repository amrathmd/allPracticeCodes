#include<stdio.h>
struct stack{
    int queue1[100];
    int queue2[100];
}stack;
int front1=-1,back1=-1,front2=-1,back2=-1;
void push(int val){
    if(front1==-1){
        front1++;
        back1++;
        stack.queue1[back1]=val;
    }
    else{
        back1++;
        stack.queue1[back1]=val;
    }
}
void pop(){
    if(front2==-1){
        front2++;
        for (int i=back1;i>=0;i--){
            back2++;
            stack.queue2[back2]=stack.queue1[i];
        }back2--;
    }
    else{
        back2--;
    }
}
int top(){
    if(front2==-1){
        front2++;
        for (int i=0;i<=back1;i++){
            back2++;
            stack.queue2[back2]=stack.queue1[i];
        }return stack.queue2[back2];
    }else{
        return stack.queue2[back2];
    }
}
void display(){
    for(int i=back2;i>=0;i--){
        printf("%d  ",stack.queue2[i]);
    }printf("\n");
}
int main(){
    for(int i=1;i<=5;i++){
        push(i);
    }
    printf("%d\n",top());
    pop();
    printf("%d\n",top());
    pop();
    printf("%d\n",top());
    display();

}
