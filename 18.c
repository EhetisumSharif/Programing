#include <stdio.h>
void main()
{
    float d,f,m;
    printf("Enter the total distance traveled (in km):\n");
    scanf("%f",&d);
    printf("Enter the amount of fuel consumed (in liters):\n");
    scanf("%f",&f);
    m=d/f;
    printf("The mileage of the bike is:%.2f km/l\n",m);
}

