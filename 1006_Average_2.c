#include <stdio.h>

int main()
{
    double A = 5.0, B = 6.0, C = 7.0, media;
    scanf("%lf %lf %lf", &A, &A, &A);

    media = ((A * 2) + (B * 3) + (C * 5)) / (2 + 3 + 5);

    printf("MEDIA = %.1lf\n", media);

    return 0;
}