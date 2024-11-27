#include<stdio.h>
#define ec 3
#define ac 2
#define mc 3
#define cc 4
void main()
{
    float e,a,m,c,ep,ap,mp,cp,tcr,epc,apc,mpc,cpc,sgpa,tpc;
    iubat:
    printf("\nInput the mark of English:\n");
    scanf("%f",&e);
    printf("Input the mark of ART:\n");
    scanf("%f",&a);
    printf("Input the mark of Math:\n");
    scanf("%f",&m);
    printf("Input the mark of CSC:\n");
    scanf("%f",&c);
    system("cls");
    ep=((e>=90)?(4):((e>=87)?(3.7):((e>=84)?(3.4):((e>=80)?(3.1):((e>=77)?(2.8):((e>=74)?(2.5):((e>=70)?(2.2):((e>=65)?(1.5):((e>=60)?(1):(0))))))))));
    ap=((a>=90)?(4):((a>=87)?(3.7):((a>=84)?(3.4):((a>=80)?(3.1):((a>=77)?(2.8):((a>=74)?(2.5):((a>=70)?(2.2):((a>=65)?(1.5):((a>=60)?(1):(0))))))))));
    mp=((m>=90)?(4):((m>=87)?(3.7):((m>=84)?(3.4):((m>=80)?(3.1):((m>=77)?(2.8):((m>=74)?(2.5):((m>=70)?(2.2):((m>=65)?(1.5):((m>=60)?(1):(0))))))))));
    cp=((c>=90)?(4):((c>=87)?(3.7):((c>=84)?(3.4):((c>=80)?(3.1):((c>=77)?(2.8):((c>=74)?(2.5):((c>=70)?(2.2):((c>=65)?(1.5):((c>=60)?(1):(0))))))))));
    epc=ep*ec;
    apc=ap*ac;
    mpc=mp*mc;
    cpc=cp*cc;
    tcr=ec+ac+mc+cc;
    tpc=epc+apc+mpc+cpc;
    sgpa=tpc/tcr;
    printf("Your SGPA is:%.2f",sgpa);
    goto iubat;
}
