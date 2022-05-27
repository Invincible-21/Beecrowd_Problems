#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    if (b > a && c > b && d > c && e > d)
    {
        printf("C\n");
    }
    else if (a > b && b > c && c > d && d > e)
    {
        printf("D\n");
    }
    else
        printf("N\n");

    return 0;
}