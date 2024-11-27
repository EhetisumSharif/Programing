#include<stdio.h>
void main ()
{
    int a,b,c;
    printf ("Enter two angle:\n");
    scanf("%d%d",&a,&b);
    c=180-(a+b);
    printf ("Third angle: %d",c);
}

