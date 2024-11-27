#include<stdio.h>
void main()
{
    int x;
    printf("Enter your age:\n");
    scanf("%d",&x);
    if (x>=18)
    {
         printf("Eligible to make a NID card.\n");
    }
    else
    {
        printf("Not Eligible to make a NID card.\n");
    }
}


