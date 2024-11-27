#include<stdio.h>
int abid(int x,int y);
int abid(int x,int y)
{
    return x+y;
}
main()
{
    int a=10,b=50,c=60;
    printf("Sum: %d\n",abid(a,b));
    printf("Sum: %d\n",abid(a,a));
    printf("Sum: %d\n",abid(b,c));
    printf("Sum: %d\n",abid(b,b));
    printf("Sum: %d\n",abid(c,a));
    printf("Sum: %d\n",abid(c,c));
}
