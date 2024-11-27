#include<stdio.h>
void main ()
{
    char x;
    printf("Enter Alphabet:\n");
    scanf("%c",&x);
    if(x=='a' || x=='A' || x=='e' || x=='E'|| x=='i' || x=='I' || x=='o' || x=='O' || x=='u' || x=='U')
    {
        printf("It's a vowel");
    }
    else
    {
        printf("It's a consonant");

    }
}
