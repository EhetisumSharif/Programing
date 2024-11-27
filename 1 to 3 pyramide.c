#include<stdio.h>
void main ()
{
    int r,c;
    for (r=1;r<=15;r++)
    {
        for (c=14;c>=r;c--)
        {
            printf(" ");
        }
        for (c=1;c<=(2*r-1);c++)
        {
            printf ("* ");
        }
        printf("\n");
    }
}

