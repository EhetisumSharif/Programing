#include<stdio.h>
int main()
{
    int n,d=0;
    printf("Enter a number:\n");
    scanf("%d",&n);
    while (n>0)
    {
        if (n%10==0)
        {
            d=1;
            break;
        }
        n/=10;
    }
    if (d)
    {
        printf("The number is a duck number.\n");
    }
    else
    {
        printf("The number is not a duck number.\n");
    }
    return 0;
}

