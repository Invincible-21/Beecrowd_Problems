#include <stdio.h>

int main()
{

    float A = 7.1, B = 8.0, med;
    scanf("%f %f", &A, &B);

    med = ((A * 3.5) + (B * 7.5)) / (3.5 + 7.5);

    printf("MEDIA = %.5f\n", med);
    return 0;
}