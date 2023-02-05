#include<stdio.h>
#include<string.h>
char stack[10];
int top=-1;
void push(char s){
    top++;
    stack[top]=s;
}
void pop(){
    top--;
}
int empty(){
    if(top==-1)
        return 1;
    else 
        return 2;
}
char showTop(){
    return stack[top];
}
int precedence(char c){
    if(c=='^')
        return 3;
    else if(c=='*' || c=='/')
        return 2;
    else if(c=='+' || c=='-')
        return 1;
    else
        return -1;
}
void infixToPostfix(char *s){
    char *res;
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='('){
            push(s[i]);
        }
        else if(s[i]>='0' && s[i]<='9'){
            res=res+s[i];
        }
        else if(s[i]==')'){
            while(!empty() && showTop(s[i])!='('){
                res=res+showTop();
                pop();
            }
            if(!empty()){
                pop();
            }
        }else{
            if(!empty() && precedence(showTop())>precedence(s[i])){
                res=res+showTop();
                pop();
            }
            else
                push(s[i]);
        }
    }while(!empty()){
        res=res+showTop();
        pop();
    }
    puts(res);
}
int main(){ 
   infixToPostfix("(6-1)*3");
}