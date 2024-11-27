#include<stdio.h>
void main ()
{
    float n1,n2,r;
    char op;
    printf ("Enter the Oparetor:\n");
    scanf("%c",&op);
    printf ("Enter the Number:\n");
    scanf("%f%f",&n1,&n2);
    switch(op)
    {
    case '+':
        r=n1+n2;
        printf ("Addition: %.2f\n",r);
        break;
    case '-':
        r=n1-n2;
        printf ("Subtraction: %.2f\n",r);
        break;
    case '*':
        r=n1*n2;
        printf ("Multipication: %.2f\n",r);
        break;
    case '/':
       if(n2!=0)
       {
            r=n1/n2;
            printf ("Division: %.2f\n",r);
       }
       else
       {
            printf ("Division by zero is not allow\n");
       }
        break;
    default:
        printf ("Invalid Operator\n");
    }
}
