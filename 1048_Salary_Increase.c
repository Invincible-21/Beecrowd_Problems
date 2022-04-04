#include <stdio.h>
#include <math.h>

int main()
{
    float n, x, y;
    scanf("%f", &n);
    char z = '%';

    if (n >= 0 && 400.00 >= n)
    {
        x = n + n * 15 / 100;
        y = n * 15 / 100;

        printf("Novo salario: %.2f\n", x);
        printf("Reajuste ganho: %.2f\n", y);
        printf("Em percentual: 15 %c\n", z);
    }
    else if (n >= 400.01 && n <= 800.00)
    {
        x = n + n * 12 / 100;
        y = n * 12 / 100;

        printf("Novo salario: %.2f\n", x);
        printf("Reajuste ganho: %.2f\n", y);
        printf("Em percentual: 12 %c\n", z);
    }
    else if (n >= 800.01 && n <= 1200.00)
    {
        x = n + n * 10 / 100;
        y = n * 10 / 100;

        printf("Novo salario: %.2f\n", x);
        printf("Reajuste ganho: %.2f\n", y);
        printf("Em percentual: 10 %c\n", z);
    }
    else if (n >= 1200.01 && n <= 2000.00)
    {
        x = n + n * 7 / 100;
        y = n * 7 / 100;

        printf("Novo salario: %.2f\n", x);
        printf("Reajuste ganho: %.2f\n", y);
        printf("Em percentual: 7 %c\n", z);
    }
    else if (n > 2000.00)
    {
        x = n + n * 4 / 100;
        y = n * 4 / 100;

        printf("Novo salario: %.2f\n", x);
        printf("Reajuste ganho: %.2f\n", y);
        printf("Em percentual: 4 %c\n", z);
    }

    return 0;
}