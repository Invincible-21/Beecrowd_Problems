#include <stdio.h>
#include <math.h>

int main()
{
    double x1 = 2.0, x2 = 3.0, y1 = 5.0, y2 = 6.0, distance;
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("%.4lf\n", distance);
    return 0;
}