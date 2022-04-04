#include <stdio.h>

int main()
{
    double X = 400, Y = 80.0;
    scanf("%lf %lf", &X, &Y);
    printf("%.3lf km/l\n", X / Y);
    return 0;
}