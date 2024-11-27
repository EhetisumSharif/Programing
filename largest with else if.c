#include<stdio.h>
void main ()
{
    int a,b,c;
    printf ("Enter a,b and c:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
          printf("a is largest: %d",a);
    }
    else if (b>a && b>c)
    {
           printf("b is largest: %d",b);
    }
    else if(c>a && c>b)
    {
        printf("c is largest: %d",c);
    }
    else
    {
        printf("There are two or more number is equal");
    }
}
