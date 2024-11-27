#include<stdio.h>
int main()
{
    int n,s,x,a=1;
    printf("Enter a number:\n");
    scanf("%d",&n);
    s=n*n;
    x=n;
    while (x>0)
    {
        if (x%10!=s%10)
        {
            a=0;
            break;
        }
        x/=10;
        s/=10;
    }
    if (a)
    {
        printf("%d is an automorphic number.\n",n);
    }
    else
    {
        printf("%d is not an automorphic number.\n",n);
    }
    return 0;
}


