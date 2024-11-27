#include<stdio.h>
void main()
{
    int n;
    printf("Divisible by 7(1 to 100):\n");
    for(n=1;n<=100;n++)
    {
       if(n%7==0)
       {
         printf("%d\t",n);
       }
    }
}
