#include<stdio.h>
void main ()
{
    int num,x;
    printf("Enter number:\n");
    scanf("%d",&num);
    for (x=1;x<=10;x++)
    {
        printf("%d X %d= %d\n",num,x,num*x);
    }
}
