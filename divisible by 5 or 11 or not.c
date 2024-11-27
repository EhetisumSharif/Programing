#include<stdio.h>
void main()
{
    int x;
    printf("Enter the Number:\n");
    scanf("%d",&x);
    if (x%5==0 || x%11==0)
    {
         if (x%5==0)
         {
            printf("The Number is Divisible by 5.\n");
         }
         else
         {
           printf("The Number is Divisible by 11.\n");
         }
    }
    else
    {
        printf("The Number is Not Divisible by 5 or 11.\n");
    }
}

