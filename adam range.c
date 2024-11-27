#include<stdio.h>
void main ()
{
   int n,rn=0,sqn,r,R,sqrn,rsqnn=0,x,y;
   for (n=1;n<=1000;n++)
   {
   sqn=n*n;
   x=n;
   while (x!=0)
   {
       r=x%10;
       rn=(rn*10)+r;
       x=x/10;
   }
   sqrn=rn*rn;
   y=sqrn;
   while (y!=0)
   {
       R=y%10;
       rsqnn=(rsqnn*10)+R;
       y=y/10;
   }
   if(sqn==rsqnn)
   {
       printf("%d\t",n);
   }
   rn=0;
   rsqnn=0;
   }
}


