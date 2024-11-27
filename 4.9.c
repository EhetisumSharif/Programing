#include<stdio.h>
void main ()
{
    int x,a,b,c,d,e,f,sum;
    printf("Enter four digit int number:\n");
    scanf("%d",&x);
    a=x%10;
    b=x/10;
    c=b%10;
    d=x/100;
    e=d%10;
    f=x/1000,
    sum=a+c+e+f;
    printf("Sum of digit is: %d",sum);
}

