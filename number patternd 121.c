#include<stdio.h>
void main ()
{
    int r,c;
    for(r=1;r<=5;r++)
    {
        for(c=1;c<=r;c++)
        {
             printf("%d ",c);
        }
        for(c=r-1;c>=1;c--)
        {
             printf("%d ",c);
        }
        printf("\n");
    }
}
