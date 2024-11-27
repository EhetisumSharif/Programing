#include<stdio.h>
void main ()
{
    char name[50];
    float u,c,m,sc,tc;
    bill:
    printf("Enter the name of the user:\n");
    scanf("%s",&name);
    printf("Enter the number of units consumed:\n");
    scanf("%f",&u);
    system("cls");
    c=((u<=200)?(u*0.80):((u<=300)?((200*0.80)+((u-200)*0.90)):((200*0.80)+(100*0.90)+((u-300)*1.00))));
    m=c+100;
    sc=(m+(m*0.15));
    tc=((m>400)?(sc):(m));
    printf("Name:%s\n",name);
    printf("Charges: Tk %.2f\n",tc);
    goto bill;
}
