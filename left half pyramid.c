#include<stdio.h>
void main ()
{
    int r,c;
    for(r=1;r<=5;r++)
    {
        for(c=5-1;c>=r;c--)
        {
             printf(" ");
        }
        for(c=1;c<=r;c++)
        {

             printf("%d",c);
        }

        printf("\n");
    }
}

