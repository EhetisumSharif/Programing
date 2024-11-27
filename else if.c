#include<stdio.h>
void main ()
{
    int m;
    printf("\nInput the mark:\n");
    scanf("%d",&m);
    if (m>=0 && m<=100)
    {
      if(m>=90)
      {
          printf("A Grade");
      }
      else if (m>=87)
      {
          printf("B+ Grade");
      }
      else if (m>=84)
      {
          printf("B Grade");
      }
      else if (m>=80)
      {
          printf("B- Grade");
      }
       else if (m>=77)
      {
          printf("C+ Grade");
      }
       else if (m>=74)
      {
          printf("C Grade");
      }
       else if (m>=70)
      {
          printf("C- Grade");
      }
       else if (m>=65)
      {
          printf("D+ Grade");
      }
       else if (m>=60)
      {
          printf("D Grade");
      }
      else
      {
          printf("F Grade");
      }
    }
    else
    {
        printf("Invalid Marks!!");
    }
}

