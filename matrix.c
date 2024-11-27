#include<stdio.h>
void main ()
{
    int r,c,row,col,n=1;
    printf("Enter Row and Column Number:\n");
    scanf ("%d%d",&r,&c);
    for (row=1;row<=r;row++)
    {
        for (col=1;col<=c;col++)
        {
            printf("%d%d ",row,col);
        }
        printf("\n");
    }
}
