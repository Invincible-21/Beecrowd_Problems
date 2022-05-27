#include <stdio.h>

int main()
{
    int x, y, i, j;
    scanf("%d %d", &x, &y);
    if (x > y)
    {
        j = x;
        x = y;
        y = j;
    }
    x++;
    for (i = x; i < y; i++)
    {
        if (i % 5 == 2 || i % 5 == 3)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}