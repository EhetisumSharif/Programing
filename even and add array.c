#include <stdio.h>
int main()
{
    int n,p,ec=0,oddc=0;
    printf("How many Elements in Array:\n");
    scanf("%d",&n);
    int A[n],eA[n],oddA[n];
    printf("Enter the Elements of Array:\n");
    for (p=0;p<n;p++)
    {
        printf("A[%d]= ",p);
        scanf("%d",&A[p]);
        if(A[p]%2==0)
        {
            eA[ec]=A[p];
            ec++;
        }
        else
        {
            oddA[oddc]=A[p];
            oddc++;
        }
    }
    printf("\nEven elements array:\n");
    for (p=0;p<ec;p++)
    {
        printf("%d ",eA[p]);
    }
    printf("\nOdd elements array:\n");
    for (p=0;p<oddc;p++)
    {
        printf("%d ",oddA[p]);
    }
    printf("\n");
    return 0;
}

