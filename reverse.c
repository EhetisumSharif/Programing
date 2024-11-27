#include<stdio.h>
void main ()
{
    int x,p,rev;
    printf("Enter number:\n");
    scanf("%d",&x);
    while (x!=0)
    {
        p=x%10;
        rev=rev*10+p;
        x/=10;
    }
      printf("Reverse of Number is: %d",rev);
}
