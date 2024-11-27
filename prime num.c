#include<stdio.h>
void main()
{
    int n,i,f=0;
    printf("Enter number:\n");
    scanf("%d",&n);
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
        printf("Prime Number");
    }
    else
    {
        printf("Not Prime Number");
    }
}
