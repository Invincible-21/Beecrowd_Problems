#include <stdio.h>
int main()
{
    double a, avg, sum = 0, temp = 0;
    while (1)
    {
        if (temp == 2)
            break;
        scanf("%lf", &a);
        if (a >= 0 && a <= 10)
        {
            temp++;
            sum += a;
        }
        else
            printf("nota invalida\n");
    }
    avg = sum / 2.00;

    printf("media = %.2lf\n", avg);

    return 0;
}