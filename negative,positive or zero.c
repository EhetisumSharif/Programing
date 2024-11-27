#include<stdio.h>
void main()
{
    int x;
    printf("Enter the Number:\n");
    scanf("%d",&x);
    if (x>0 || x<0)
    {
         if (x>0)
         {
            printf("The Number is Positive\n");
         }
         else
         {
            printf("The Number is Negative\n");
         }
    }
    else
    {
        printf("The Number is Zero\n");
    }
}

