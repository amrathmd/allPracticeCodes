#include<stdio.h>
#include<string.h>
int stack[10];
int top=-1;
void push(int val){
    top++;
    stack[top]=val;
}
void pop(){
    top--;
}
int Top(){
    return stack[top];
}
int postfixEvaluation(char *s){
    char d[]="";
    for(int i=0;i<strlen(s);i++){
        if(s[i]>='0' && s[i]<='9')
            push(s[i]-'0');
        else{
            int op2=Top();
            pop();
            int op1=Top();
            pop();
            switch (s[i]){
                case '+':
                    push(op1+op2);
                    break;
                case '-':
                    push(op1-op2);
                    break;
                case '*':
                    push(op1*op2);
                    break;
                case '/':
                    push(op1/op2);
                    break;
            }
        }
    }return Top();

}
int main(){
    char a[]="6324+–*";
    printf("%d\n",postfixEvaluation(a));
}