#include<stdio.h>
int r,c,k,n=3;
void read(int x[10][10]);
void show(int x[10][10]);
void m(int x[10][10],int y[10][10]);
void read(int x[10][10])
{
    for(r=0;r<n;r++)
    {
        for(c=0;c<n;c++)
        {
            printf("[%d][%d]: ",r,c);
            scanf("%d",&x[r][c]);
        }
    }
}
void show(int x[10][10])
{
    for(r=0;r<n;r++)
    {
        for(c=0;c<n;c++)
        {
            printf("%d\t",x[r][c]);
        }
        printf("\n");
    }
}
void m(int x[10][10],int y[10][10])
{
   int R[10][10];
   for (r=0;r<n;r++)
   {
       for(c=0;c<n;c++)
       {
           R[r][c]=0;
           for(k=0;k<n;k++)
           {
               R[r][c]+=x[r][c]*y[r][c];
           }
       }
   }
   show(R);
}
void main()
{
    int A[10][10],B[10][10],C[10][10];
    printf("Enter the elements of matrix A:\n");
    read(A);
    printf("Enter the elements of matrix B:\n");
    read(B);
    printf("The elements of matrix A are:\n");
    show(A);
    printf("The elements of matrix B are:\n");
    show(B);
    printf("The Product of matrix AxB are:\n");
    m(A,B);
}
