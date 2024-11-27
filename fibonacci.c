#include <stdio.h>
void main()
{
    int n,i;
    long long int f1=0,f2=1,f3;
    printf("Enter the number:\n");
    scanf("%d",&n);
    printf("Fibonacci Series: ");
    for (i=0;i<n;i++)
    {
    if(i<=1)
    {
        f3=i;
    }
    else
    {
        f3=f1+f2;
        f1=f2;
        f2=f3;
    }
    printf("%lld, ",f3);
    }
    printf("\n");
}

