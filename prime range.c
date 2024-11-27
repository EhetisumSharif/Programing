#include<stdio.h>
int main()
{
    int n,i,f;
    for (n=2;n<=100;n++)
    {
      f=0;
    for (i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
           f++;
           break;

        }
    }
    if(f==0)
    {
        printf("%d\t",n);
    }
    }
    return 0;
}


