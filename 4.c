#include<stdio.h>
#include<math.h>
void main ()
{
    float area,s;
    printf ("Enter length:\n");
    scanf("%f",&s);
    area= (sqrt(3)/4)*s*s;
    printf ("Area of Equilateral Triangle: %f",area);
}
