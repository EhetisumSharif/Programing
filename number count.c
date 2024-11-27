#include <stdio.h>
int main()
{
    int n,count = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (n==0)
    {
        count=1;
    }
    else
    {
        while(n!= 0)
        {
            n/=10;
            count++;
        }
    }
    printf("\nNumber of digits: %d\n",count);
    return 0;
}

