#include<stdio.h>
void main ()
{
    int n,i,e,d,f=0;
    printf("Enter Initial and Ending Value of the Range:\n");
    scanf("%d%d",&i,&e);
    for (n=i;n<=e;n++)
    {
       f=1;
       for (d=2;d<=(n/2);d++)
       {
           if(n%d==0)
       {
            f=0;
            break;
       }
       }
        if(f==1 && n!=1)
    {
        printf("%d\t",n);
    }
    }
}

