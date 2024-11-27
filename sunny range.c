#include<stdio.h>
#include<math.h>
void main ()
{
   int n;
   double root;
for (n=1;n<=100;n++)
{
   root=sqrt(n+1);
   if((int)root==root)
   {
      printf("%d\t",n);
   }
}
   root=0;
}

