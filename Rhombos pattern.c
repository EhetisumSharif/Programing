#include<stdio.h>
void main ()
{
    int r,c;
    char x='A';
    for(r=1;r<=5;r++)
    {
        for(c=5-1;c>=r;c--)
        {
             printf(" ");
        }
        for(c=1;c<=5;c++)
        {
             printf("%c ",x);

        }
        printf("\n");
        x++;
    }
}


