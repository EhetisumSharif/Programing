#include<stdio.h>
void main()
{
    int a1,a2,a3;
    printf("Enter the angles:\n");
    scanf("%d%d%d",&a1,&a2,&a3);
    if(a1+a2+a3==180)
    {
        printf("This is Valid triangle.\n");
    }
    else
    {
         printf("This is Not Valid triangle.\n");
    }
}
