#include <stdio.h>

int main()
{
    int i, j;
    float x, y;
    for (i = 0, j = 1; j <= 3; j = j + 1)
    {
        printf("I=%d J=%d\n", i, j);
    }
    for (x = 0.2, y = 1.2; y < 3.3; y = y + 1)
    {
        printf("I=%.1f J=%.1f\n", x, y);
    }
    for (x = 0.4, y = 1.4; y < 3.5; y = y + 1)
    {
        printf("I=%.1f J=%.1f\n", x, y);
    }
    for (x = 0.6, y = 1.6; y < 3.7; y = y + 1)
    {
        printf("I=%.1f J=%.1f\n", x, y);
    }
    for (x = 0.8, y = 1.8; y < 3.9; y = y + 1)
    {
        printf("I=%.1f J=%.1f\n", x, y);
    }
    for (i = 1, j = 2; j <= 4; j = j + 1)
    {
        printf("I=%d J=%d\n", i, j);
    }
    for (x = 1.2, y = 2.2; y < 4.3; y = y + 1)
    {
        printf("I=%.1f J=%.1f\n", x, y);
    }
    for (x = 1.4, y = 2.4; y < 4.5; y = y + 1)
    {
        printf("I=%.1f J=%.1f\n", x, y);
    }
    for (x = 1.6, y = 2.6; y < 4.7; y = y + 1)
    {
        printf("I=%.1f J=%.1f\n", x, y);
    }
    for (x = 1.8, y = 2.8; y < 4.9; y = y + 1)
    {
        printf("I=%.1f J=%.1f\n", x, y);
    }
    for (i = 2, j = 3; j <= 5; j = j + 1)
    {
        printf("I=%d J=%d\n", i, j);
    }

    return 0;
}