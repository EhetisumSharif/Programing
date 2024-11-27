#include <stdio.h>
int main()
{
    int r,c;
    for (r=1;r<=5;r++)
        {
        for (c=1;c<=5;c++)
        {
            if (r==3 && c==3)
            {
                printf("o ");
            }
            else
            {
                printf("x ");
            }
        }
        printf("\n");
    }

    return 0;
}

