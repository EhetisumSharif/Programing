#include<stdio.h>
#include<stdlib.h>
void main ()
{
    int m;
    abid:
    printf("\nInput the mark:\n");
    scanf("%d",&m);
    system("cls");
    ((m>=0 && m<=100))?((m>=90)?(printf("A Grade"))
                        :((m>=87)?(printf("B+ Grade"))
                          :((m>=84)?(printf("B Grade"))
                                     :((m>=80)?(printf("B- Grade"))
                                                :((m>=77)?(printf("C+ Grade"))
                                                           :((m>=74)?(printf("C Grade"))
                                                                      :((m>=70)?(printf("C- Grade"))
                                                                                 :((m>=65)?(printf("D+ Grade"))
                                                                                            :((m>=60)?(printf("D Grade")):(printf("F Grade")))))))))))
                                                                                            :(printf("Invalid Marks!!"));

    goto abid;
}
