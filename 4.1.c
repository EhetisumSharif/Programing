#include<stdio.h>
void main ()
{
    float x;
    int a;
    printf("Enter floating number:\n");
    scanf("%f",&x);
    a=(int)x%10;
    printf("Right most of number: %d",a);

}
