#include <stdio.h>
#include <math.h>

int main()
{
    int R, L;
    scanf("%d %d", &R, &L);

    int Area = ((4.0 / 3) * (3.1415 * R * R * R));
    printf("%d", L / Area);
    return 0;
}