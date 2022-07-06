#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int i;
    double x, y;

    for (i = 1; i <= n; i++)
    {
        scanf("%lf %lf", &x, &y);

        if (x != 0 && y != 0)
        {
            float div;
            div = x / y;
            printf("%.1f\n", div);
        }

        else if (y == 0)
        {
            printf("divisao impossivel\n");
        }

        else if (x == 0)
        {
            printf("0.0\n");
        }
    }

    return 0;
}