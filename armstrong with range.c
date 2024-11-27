#include<stdio.h>
#include<math.h>
int main ()
{
    int n;
    printf("Armstrong number is:\n");
    for (n=1;n<=2000;n++)
    {
        int d=0,r,i;
        double nn=0;
        for (i=n;i!=0;i/=10)
    {
        d++;
    }
     for (i=n;i!=0;i/=10)
    {
        r=i%10;
        nn+=pow(r,d);
    }
    if ((int)nn==n)
    {
        printf("%d ",n);
    }
    }
    printf("\n");
    return 0;
}

