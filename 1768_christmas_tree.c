#include <stdio.h>

int main()
{

    short n, i, j, z;

    while (scanf("%hu", &n) != EOF)
    {

        for (i = 0; i < n; i += 2)
        {
            for (j = 0; j < (n - i) / 2; j++)
                printf(" ");

            for (z = i; z >= 0; z--)
                printf("*");

            printf("\n");
        }

        for (i = 0; i < n / 2; i++)
            printf(" ");
        printf("*\n");

        for (i = 1; i < n / 2; i++)
            printf(" ");

        printf("***\n\n");
    }

    return 0;
}