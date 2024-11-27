#include<stdio.h>
void main ()
{
    int r,c;
    for(r=1;r<=10;r++)
    {
        for(c=1;c<=r;c++)
        {
             if (r>1 && r<=10-1 && c>1 && c<r)
            {
                printf("  ");
            }
            else
            {
                printf("%d",c);

            }
        }
         printf("\n");
   }
}
