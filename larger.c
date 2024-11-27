#include<stdio.h>
void main ()
{
    int a,b;
    printf ("Enter a and b:\n");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
          printf("a is largest: %d",a);
    }
    else
    {
       printf("b is largest: %d",b);
    }
}
