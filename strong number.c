#include<stdio.h>
int main()
{
    int n,x,d,f,sum=0,i;
    printf("Enter a number:\n");
    scanf("%d",&n);
    x=n;
    while(x!=0)
    {
        d=x%10;
        f=1;
        for(i=1;i<=d;i++)
        {
            f*=i;
        }
        sum+=f;
        x/=10;
    }
    if(sum==n)
    {
        printf("%d is a strong number.\n",n);
    }
    else
    {
        printf("%d is not a strong number.\n",n);
    }
    return 0;
}

