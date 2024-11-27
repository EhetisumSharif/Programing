#include <stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter a number:\n");
    scanf("%d",&n);
     while (n>9)
    {
        while (n>0)
        {
             sum += n % 10;
             n /= 10;
        }
       n = sum;
       sum = 0;
    }
    if (n==1)
        {
            printf("%d is a magic number.\n",n);
        }
    else
        {
            printf("%d is not a magic number.\n",n);
        }
    return 0;
}
