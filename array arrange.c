 #include<stdio.h>
 int  main()
 {
     int A[100],p,q,h,n,l;
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
     for (p=0;p<n;p++)
     {
          for (q=p+1;q<n;q++)
          {
              if(A[p]>A[q])
              {
                  h=A[p];
                  A[p]=A[q];
                  A[q]=h;
              }
          }
     }

     printf("\nThe sorted Elements of A are:\n");
     for (p=0;p<n;p++)
     {
         printf("%d\t",A[p]);
     }
     return 0;
 }
