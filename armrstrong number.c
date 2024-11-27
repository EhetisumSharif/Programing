#include<stdio.h>
#include<math.h>
int main ()
{
    int n,d=0,r,i;
    double nn=0;
    printf("Enter the number:\n");
    scanf("%d",&n);
    for (i=n;i!=0;i/=10)
    {
        d++;
    }
     for (i=n;i!=0;i/=10)
    {
        r=i%10;
        nn+=pow(r,d);
    }
    printf("%lf\n",nn);
    if (nn==n)
    {
        printf("Armstrong number\n");
    }
    else
    {
        printf("Not Armstrong number\n");
    }
    return 0;
}
