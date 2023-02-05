#include<stdio.h>
#include<string.h>
char stack[100];
int top=-1;
void push(char a){
    top++;
    stack[top]=a;
}char Top(){
    return stack[top];
}
int precedency(char a){
    if(a=='^')
        return 3;
    if(a=='/' || a=='*')
        return 2;
    else if(a=='-' || a=='+')
        return 1;
    else
        return -1;
}
int isempty(){
    if(top==-1){
        return 1;
    }else{
        return 0;
    }
}
void infixToPostfix(char s[]){
    char res[100];
    int k=0;
    for(int i=0;i<strlen(s);i++){
        if(s[i]>='a' && s[i]<='z'){
            res[k]=s[i];
            k++;
        }
        else if(s[i]=='('){
            push(s[i]);
        }
        else if(s[i]==')'){
            while(!isempty() && Top()!='('){
                res[k]=Top();
                k++;
                top--;
            }if(!isempty()){
                top--;
            }
        }else {
            if(!isempty() && precedency(s[i])<=precedency(Top())){
                res[k]=Top();
                k++;
                top--;
            }push(s[i]);
        }
    }while(!isempty()){
        res[k]=Top();
        top--;
    }puts(res);
}
int main(){
    infixToPostfix("(a+b)*(c*d-e)");
}