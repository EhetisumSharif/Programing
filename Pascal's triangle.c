#include<stdio.h>
void main ()
{
    int c,r;
    for (r=1;r<=5;r++)
    {
         for(c=5-1;c>=r;c--)
        {
             printf(" ");
        }
        int x=1;
        for (c=1;c<=r;c++)
        {
          printf("%d ",x);
          x=x*(r-c)/c;
        }
         printf("\n");
    }
}

