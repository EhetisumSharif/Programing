#include <stdio.h>
int main()
{
    int A[100],p,s,f,n;
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
    printf("\nEnter element to search:\n");
    scanf("%d",&s);
    f=0;
    for(p=0;p<n;p++)
    {
        if(A[p]==s)
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        printf("\n%d is found at position %d\n",s,p+1);
    }
    else
    {
        printf("\n%d is not found in the array!!\n",s);
    }
    return 0;
}

