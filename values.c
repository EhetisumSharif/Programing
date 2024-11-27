#include<stdio.h>
void main()
{
    int x,y,a,b,c,d ;
    printf("Enter a,b,c and d Value:\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    x=a+b;
    y=c-d;
    printf("a+b is: %d\n",x);
    printf("c-d is: %d\n",y);
    if(y<x)
    {
        printf("%d\n",x);
    }
    else
    {
        printf("%d\n",y);
    }
}
