#include<stdio.h>
void main ()
{
    int x,p,sum;
    printf("Enter number:\n");
    scanf("%d",&x);
    while (x!=0)
    {
        p=x%10;
        sum+=p;
        x/=10;
    }
      printf("summation: %d",sum);
}


