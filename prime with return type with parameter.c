#include<stdio.h>
int abid(int);
void amor(int);
int abid(int n)
{
    int i,f=0;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            f++;
            break;
        }
    }
    return f;
}
void amor(int n)
{
   int z;
   z= abid(n);
   if(z==0)
    {
        printf("Prime number\n");
    }
    else
    {
        printf("Not prime number\n");
    }
}
void main()
{
    int x;
    printf("Enter the number:\n");
    scanf("%d",&x);
    amor(x);
}

