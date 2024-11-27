 #include<stdio.h>
 void main()
 {
     int A[100],B[100],R[100],p,n;
     printf("How many Elements in A and B:\n");
     scanf("%d",&n);
     printf("Enter the Elements of A:\n");
     for (p=0;p<n;p++)
     {
         printf("A[%d]=",p);
         scanf("%d",&A[p]);
     }
     printf("Enter the Elements of B:\n");
     for (p=0;p<n;p++)
     {
         printf("B[%d]=",p);
         scanf("%d",&B[p]);
     }
     printf("\nElements of A are:\n");
     for (p=0;p<n;p++)
     {
         printf("%d\t",A[p]);

     }
     printf("\nElements of B are:\n");
     for (p=0;p<n;p++)
     {
         printf("%d\t",B[p]);

     }
      for (p=0;p<n;p++)
     {
         R[p]=A[p]+B[p];

     }
      printf("\nResulting Elements are:\n");
     for (p=0;p<n;p++)
     {
         printf("%d\t",R[p]);

     }
 }
