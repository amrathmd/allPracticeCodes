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
int prefixEvaluation(char *s){
    char b[10]="";
    for(int i=(strlen(s)-1);i>=0;i--){
        if(s[i]>='0' && s[i]<='9')
            push(s[i]-'0');
        else{
            int op1=Top();
            pop();
            int op2=Top();
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
    char a[]="-+7*45+20";
    printf("%d\n",prefixEvaluation(a));
}