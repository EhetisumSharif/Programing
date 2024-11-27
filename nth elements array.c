#include<stdio.h>
 void main()
 {
     int A[100],p,q,h,n;
     printf("How many Elements in A:\n");
     scanf("%d",&n);
     printf("Enter the Elements of A:\n");
     for (p=0;p<n;p++)
     {
         printf("A[%d]=",p);
         scanf("%d",&A[p]);
     }
     printf("\nElements of A are:\n");
     for (p=0;p<n;p++)
     {
         printf("%d\t",A[p]);

     }
 }

