#include<stdio.h>
#include <math.h>

void  main()
{
    float principle,rate,time,SI;
    printf("Enter principle amount:\n");
    scanf("%f",&principle);
    printf("Enter time in years:\n");
    scanf("%f",&time);
    printf("Enter rate:\n");
    scanf("%f", &rate);
    SI=((principle*rate*time)/100);
    printf("Simple Interest = %.2f",SI);
}
