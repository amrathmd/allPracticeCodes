#include<stdio.h>
int main()
{
    int m;
    printf("Enter the marks :");
    scanf("%d",&m);
    if(m>90)
    {
        printf("Placed in top-1 university.\n");
    }
    else if(m>80)
    {
        printf("Placed in top-3 universities\n");
    }
    else if(m>70)
    {
        printf("Placed in low level colleges\n");
    }
    else if(m>60)
    {
        printf("Placed in colleges\n");
    }
    else{
        printf("Not qualified for admissions\n");
    }
}