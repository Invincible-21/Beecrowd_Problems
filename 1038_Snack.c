#include <stdio.h>

int main()
{
    int X, Y;
    scanf("%d %d", &X, &Y);

    if (X == 1)
    {
        float total = 4.00 * Y;
        printf("Total: R$ %.2f\n", total);
    }
    if (X == 2)
    {
        float total = 4.50 * Y;
        printf("Total: R$ %.2f\n", total);
    }
    if (X == 3)
    {
        float total = 5.00 * Y;
        printf("Total: R$ %.2f\n", total);
    }
    if (X == 4)
    {
        float total = 2.00 * Y;
        printf("Total: R$ %.2f\n", total);
    }
    if (X == 5)
    {
        float total = 1.50 * Y;
        printf("Total: R$ %.2f\n", total);
    }

    return 0;
}