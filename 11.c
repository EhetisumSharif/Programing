#include<stdio.h>
#include <math.h>

void  main()
{
    float principle,n,rate,time,CI;
    printf("Enter principle amount:\n");
    scanf("%f",&principle);
    printf("Enter number of times interest is compounded per year:\n");
    scanf("%f",&n);
    printf("Enter time in years:\n");
    scanf("%f",&time);
    printf("Enter rate:\n");
    scanf("%f", &rate);
    CI = principle*(pow((1+rate/n), n*time));
    printf("Compound Interest = %.2f",CI);
}
