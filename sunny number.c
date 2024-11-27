#include<stdio.h>
#include<math.h>
int main ()
{
   int n;
   double root;
   printf("Input The Number:\n");
   scanf("%d",&n);
   root=sqrt(n+1);
   printf("Root Value is:%lf\n",root);
   if((int)root==root)
   {
      printf("Sunny Number");
   }
   else
   {
       printf("Not Sunny Number");
   }
   return 0;
}
