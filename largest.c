#include<stdio.h>
void main ()
{
    int a,b,c;
    printf ("Enter a,b and c:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
       if(a>c)
       {
           printf("a is largest: %d",a);
       }
       else
       {
           if(c>a)
          {
               printf("c is largest: %d",c);
          }
          else
          {
               printf("There are two or more number is equal");
          }
       }
    }
    else
    {
    if (a==b)
    {
        printf("There are two or more number is equal");
    }
    else
    {
        if(b>c)
       {
           printf("b is largest: %d",b);
       }
       else
       {
          if(c>b)
          {
               printf("c is largest: %d",c);
          }
          else
          {
               printf("There are two or more number is equal");
          }
       }
    }
    }
}

