#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char stack[100];
int top=-1;
void push(char a){
    if(top>=99){
        printf("stack is overflown");
    }
    top++;
    stack[top]=a;
}
void pop(){
    top--;
}
char Top(){
    return stack[top];
}
int isempty(){
    if(top==-1)
        return 1;
    else
        return 0;
}
int precedence(char a){
    if(a=='^')
        return 3;
    if(a=='/' || a=='*')
        return 2;
    else if(a=='-' || a=='+')
        return 1;
    else
        return -1;
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
void infixToPostfix(char* s){
    char result[100];
    int j=0;
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='('){
            push(s[i]);
        }
        else if(s[i]>='a' && s[i]<='z'){
            result[j]=s[i];
            j++;
        }
        else if(s[i]==')'){
            while(!isempty() && Top()!='('){
                
                result[j]=Top();
                pop();
                j++;
                
                
            }
            if(!isempty())
                pop();
        }
        else{
            while(!isempty() && precedence(s[i])<precedence(Top())){
                result[j]=Top();
                j++;
                pop();
            }push(s[i]);
            
        }
    }while(!isempty()){
        result[j]=Top();
        j++;
        pop();
    }
    
    puts(result);
}
int main(){
    infixToPostfix("a+(b*c(d/e^f)*g)*h)");
}