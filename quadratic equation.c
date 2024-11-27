#include<stdio.h>
#include<math.h>
void main ()
{
    float a,b,c,x,x1,x2,p,m;
    printf ("Input the value of a,b and c:\n");
    scanf("%f%f%f",&a,&b,&c);
    x=(-c/b);
    p=((b*b)-(4*a*c));
    m=(sqrt(p)/(2*a));
    x1=(-b+m);
    x2=(-b-m);
    ((a==0 && b==0)?(printf("\nNo solution!!"))
     :((a==0)?(printf("\nSingle Root is: %f",x))
       :((p<0)?(printf("\nNo Real Root"))
         :(printf("\n Roots are:\nx1=%f\tx2=%f",x1,x2)))));
}
