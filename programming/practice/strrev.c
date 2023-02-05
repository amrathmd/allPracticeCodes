#include<stdio.h>
#include<string.h>
int main()
{
    char c[30],d[30];
    int len,i,temp;
    gets(c);
    len=strlen(c);
    for(int i=0;c[i]!='\0';i++)
    {
        temp=c[i];
        c[i]=c[len-i-1];
        c[len-i-1]=temp;
        printf("reverse of the string is %s",c);
        break;       
    }
    
   
}