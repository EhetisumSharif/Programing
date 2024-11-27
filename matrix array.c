#include <stdio.h>
int main()
{
    int A[10][10],r,c,n,de=0,ut=0,lt=0;
    printf("How many Row and column:\n");
    scanf("%d",&n);
    printf("Enter the Elements of Matrix A:\n");
    for(r=0;r<n;r++)
    {
        for (c=0;c<n;c++)
        {
            printf("A[%d][%d]= ",r,c);
            scanf("%d",&A[r][c]);
        }
    }
    printf("The Elements of Matrix A are:\n");
    for(r=0;r<n;r++)
    {
        for (c=0;c<n;c++)
        {
            printf("%d\t",A[r][c]);
        }
        printf("\n");
    }
    printf("\nThe Transpose of Matrix A are:\n");
    for(r=0;r<n;r++)
    {
        for (c=0;c<n;c++)
        {
            printf("%d\t",A[c][r]);
        }
         printf("\n");
    }
    for(r=0;r<n;r++)
    {
        for (c=0;c<n;c++)
        {
           if(r==c)
           {
               de+=A[r][c];
           }
           else if (r<c)
           {
               ut+=A[r][c];
           }
           else
           {
               lt+=A[r][c];
           }
        }
    }
     printf("\nDiagonal Elements of Matrix A are: %d",de);
     printf("\nUpper Triangle of Matrix A are: %d",ut);
     printf("\nLower Triangle of Matrix A are: %d",lt);
}
