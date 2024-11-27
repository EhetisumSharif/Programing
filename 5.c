#include<stdio.h>
#define p 3.1416
void main ()
{
    float a,r,per;
    printf ("Enter radius of circle:\n");
    scanf("%f",&r);
    a=p*r*r;
    per= 2*p*r;
    printf ("Area of Circle: %f \nPerimeter of Circle: %f\n",a,per);
}

