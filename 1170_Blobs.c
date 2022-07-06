#include <stdio.h>

int main()
{
    int n, count, i;
    float x;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%f", &x);
        count = 0;
        while (x > 1)
        {
            x = x / 2;
            count++;
        }
        printf("%d dias\n", count);
    }

    return 0;
}