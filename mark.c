#include<stdio.h>
void main()
{
    int m,p,ch,tmp,t;
    printf("Enter Math,Physics and Chemistry Marks:\n");
    scanf("%d%d%d",&m,&p,&ch);
    tmp=m+p;
    t=m+p+ch;
    if(m>=65 && p>=55 && ch>=50)
    {
         printf("Eligible for Admission.\n");
    }
    else if(t>=180)
    {
        printf("Eligible for Admission.\n");
    }
    else if(tmp>=140)
    {
        printf("Eligible for Admission.\n");
    }
    else
    {
        printf("Not Eligible for Admission.\n");
    }
}
