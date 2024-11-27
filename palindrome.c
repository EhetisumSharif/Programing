#include<stdio.h>
void main ()
{
    int x,p,rev,a;
    printf("Enter number:\n");
    scanf("%d",&x);
    a=x;
    while (x!=0)
    {
        p=x%10;
        rev=rev*10+p;
        x/=10;
    }
    if(a==rev)
    {
         printf("%d is a Palindrome number.\n",a);
    }
    else
    {
        printf("%d is Not a Palindrome number.\n",a);
    }
}

