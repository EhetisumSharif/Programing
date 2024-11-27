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
        for(c=1;c<=5;c++)
        {
             if (r>1 && r<=5-1 && c>1 && c<=5-1)
            {
                printf("  ");
            }
            else
            {
                printf("%d ",c);

            }
        }

        printf("\n");
    }
}



