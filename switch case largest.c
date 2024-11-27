#include<stdio.h>
void main ()
{
    int a,b,c;
    printf ("Enter a,b and c:\n");
    scanf("%d%d%d",&a,&b,&c);
    switch(a>b && a>c)
    {
    case 1:
        printf("a is largest: %d",a);
        break;
    case 0:
        switch(b>a && b>c)
        {
        case 1:
             printf("b is largest: %d",b);
             break;
        case 0:
             switch(c>a && c>b)
             {
             case 1:
                 printf("c is largest: %d",c);
             break;
             case 0:
                printf("There are two or more number is equal\n");
                break;
             }
        }
            break;
    }
}
