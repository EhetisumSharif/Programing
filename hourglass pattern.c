#include<stdio.h>
void main ()
{
    int r,c;
     for (r=10;r>=2;r--)
    {
        for (c=10-1;c>=r;c--)
        {
            printf(" ");
        }
        for (c=1;c<=r;c++)
        {
            printf ("%d ",c);
        }
        printf("\n");
    }
     for (r=1;r<=10;r++)
    {
        for (c=10-1;c>=r;c--)
        {
            printf(" ");
        }
        for (c=1;c<=r;c++)
        {
            printf ("%d ",c);
        }
        printf("\n");
    }
}
