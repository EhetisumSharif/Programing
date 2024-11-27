#include <stdio.h>
void main()
{
    int n,i,f=1;
    printf("Enter Number:\n");
    scanf("%d",&n);
    if (n>=0)
    {
         for (i=1;i<=n;i++)
      {
        f=f*i;
      }
      printf("Factorial of %d is %d\n",n,f);
    }
}
