#include <stdio.h>
int main()
{
    int A[100],p,n,se,c=0;

    printf("How many Elements in A:\n");
    scanf("%d",&n);

    printf("Enter the Elements of A:\n");
    for (p=0;p<n;p++)
    {
        printf("A[%d]= ",p);
        scanf("%d",&A[p]);
    }

    printf("\nElements of A are:\n");
    for (p=0;p<n;p++)
    {
        printf("%d\t",A[p]);
    }

    printf("\nWhat are you searching?\n");
    scanf("%d",&se);

    for (p=0;p<n;p++)
    {
        if (se==A[p])
        {
            c++;
            printf("\n%d Located in %d Position",se,p+1);
        }
    }

    printf("\n%d Available %d Time(s)",se,c);

    return 0;
}
