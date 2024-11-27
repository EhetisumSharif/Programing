#include<stdio.h>
void main ()
{
    int a,b;
    printf ("Enter a and b:\n");
    scanf("%d%d",&a,&b);
    switch(a>b)
    {
    case 1:
       printf("a is largest: %d\n",a);
       break;
       default:
       printf("b is largest: %d\n",b);
    }
}
