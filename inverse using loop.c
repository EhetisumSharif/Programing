#include<stdio.h>
void main ()
{
    int x,p,sum;
    printf("Enter number:\n");
    scanf("%d",&x);
    while (x!=0)
    {
        p=x%10;
        sum=sum*10+p;
        x/=10;
    }
      printf("Inverse number is: %d",sum);
}

