#include<stdio.h>
void main ()
{
    int m;
    printf("Input the mark:\n");
    scanf("%d",&m);
    switch (m>=0 && m<=100)
    {
   case 1:
       switch(m/10)
    {
    case 10:
    case 9:
         printf("A Grade");
          break;
    case 8:
       switch(m%10)
       {
       case 9:
       case 8:
       case 7:
            printf("B+ Grade");
          break;
       case 6:
       case 5:
       case 4:
            printf("B Grade");
          break;
       default:
           printf("B- Grade");
       }
       break;
       case 7:
           switch (m%10)
           {
              case 9:
       case 8:
       case 7:
            printf("C+ Grade");
          break;
       case 6:
       case 5:
       case 4:
            printf("C Grade");
          break;
       default:
           printf("C- Grade");
           }
        break;
       case 6:
           switch (m%10)
           {
               case 9:
       case 8:
       case 7:
       case 6:
       case 5:
           printf("D+ Grade");
          break;
       default:
            printf("D Grade");
           }
        break;
    default:
         printf("F Grade");
    }
    break;
    default:
    printf("Invalid marks!!");
    }
}
