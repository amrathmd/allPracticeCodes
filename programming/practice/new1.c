#include<stdio.h>
int main()
{
    int array[]={2,4,6};
    for(int i=0;i<3;i++)
     printf("%d ",*(array+i));
}