#include <stdio.h>
int main()
{
    double a, b, n, s;

    scanf("%lf %lf", &a, &b);

    n = (b - a) + 1;
    s = (n / 2) * (2 * a + (n - 1));
    printf("%.0lf\n", s);

    return 0;
}