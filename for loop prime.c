#include<stdio.h>
void main ()
{
    int x,i,f=0;
    printf("Enter number:\n");
    scanf("%d",&x);
    for (i=2;i<=x/2;i++)
    {
       if(x%i==0)
       {
            f++;
            break;
       }
    }
    if(f==0)
    {
        printf("Its a prime number");
    }
    else
    {
        printf("Its not a prime number");
    }
}
