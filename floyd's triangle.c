#include<stdio.h>
void main ()
{
    int c,r,x=1;
    for (r=1;r<=5;r++)
    {
        for (c=1;c<=r;c++)
        {
          printf("%d ",x);
          x++;
        }
         printf("\n");
    }
}

