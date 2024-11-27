#include<stdio.h>
void main ()
{
    float u,b;
    printf("Enter the number of units consumed:\n");
    scanf("%f",&u);
    if(u<=50)
    {
        b=u*0.50;
    }
    else if(u<=150)
    {
        b=(50*0.50)+((u-50)*0.75);
    }
    else if(u<=250)
    {
        b=(50*0.50)+(100*0.75)+((u-150)*1.20);
    }
    else
    {
        b=(50*0.50)+(100*0.75)+(100*1.20)+((u-250)*1.50);
    }
    b+=b*0.20;
    printf("\nTotal electricity bill: Rs %.2f\n",b);
}

