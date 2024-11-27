#include<stdio.h>
void abid(int);
void abid(int n)
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
    if(f==0)
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
    int x=5,y=7,a=10;
    abid(x);
    abid(y);
    abid(a);
}
