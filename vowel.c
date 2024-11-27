#include<stdio.h>
void main ()
{
    char x;
    printf("Enter Alphabet:\n");
    scanf("%c",&x);
    switch (x=='a' || x=='A' || x=='e' || x=='E'
            || x=='i' || x=='I' || x=='o' || x=='O'
            || x=='u' || x=='U')
    {
    case 1:
        printf("It's a vowel");
        break;
    default:
        printf("It's a consonant");

    }
}
