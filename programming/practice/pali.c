
#include<stdio.h>
#include<string.h>
int main()
{
    char c[30],d[30],e[30];
    int len,i,temp,f=0;
    gets(c);
    gets(d);
    len=strlen(c);
    /*1.for(int i=0;i<len/2;i++)
    {
        temp=c[i];
        c[i]=c[len-i-1];
        c[len-i-1]=temp;
             
    }
     printf("reverse of the string is %s",c); //reverse of a string

   /*1. for(int i=0;i<len/2;i++)
    {
        if(c[i]!=c[len-i-1])
            f=1;
    }
    if(f==0)
        printf("palindrome");
    else
        printf("not a palinrdrome");
    
    3.if((strcmp(c,d))==0)
    {
        printf("two strings are eqaul");
    }
    else
    {
        printf("two strings are not equal");
    } //comparing two strings
  4. strcpy(e,d);
   printf("%s",e); */ //copying one string to another
   strrev(c);
   puts(c);


}