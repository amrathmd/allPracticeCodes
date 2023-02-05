#include<stdio.h>
#include<string.h>
char string[100];
char res[100];
int top=-1;
int count=0;
void push(char a){
    top++;
    string[top]=a;
}
int k=0;
char pop(){
    char a=string[top];
    top--;
    return a;
}
int empty(){
    if(top==-1){
        return 1;
    }else{
        return 0;
    }
}

void reverseStt(char s[]){
    for(int i=strlen(s)-1;i>=0;i--){
        for(int j=i;j>=0;j--,i--){
            if(s[i]==' ')
                break;
            else{
                push(s[i]);
                count++;
            }
        }while(count!=0){
            res[k++]=pop();
            count--;
        }
        res[k++]=' ';
}res[k++]='\0';
puts(res);
}
int main(){
    reverseStt("data structures and algorithms");

}