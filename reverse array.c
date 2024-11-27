#include <stdio.h>
int main()
{
    int A[100],n,p;
    printf("How many Elements in Array:\n");
     scanf("%d",&n);
     printf("Enter the Elements of Array:\n");
     for (p=0;p<n;p++)
     {
         printf("A[%d]=",p);
         scanf("%d",&A[p]);
     }
     printf("\nElements of Array are:\n");
     for (p=0;p<n;p++)
     {
         printf("%d\t",A[p]);

     }
    printf("\nArray in reverse order:\n");
    for(p=n-1;p>=0;p--)
    {
        printf("%d\t",A[p]);
    }
    return 0;
}

