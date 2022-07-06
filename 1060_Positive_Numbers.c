#include <stdio.h>

int main()
{
    int i, count = 0;
    double n;

    for (i = 0; i < 6; i++)
    {
        scanf("%lf", &n);
        if (n > 0)
        {
            count++;
        }
    }
    printf("%d valores positivos\n", count);

    return 0;
}