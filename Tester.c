#include <stdio.h>

int main()
{

    int a, b, n, sum, i;
    scanf("%d", &n);
    while (n)
    {
        scanf("%d %d", &a, &b);
        sum = 0;
        if (a > b)
        {
            for (i = a - 1; i > b; i--)
            {
                if (i % 2 != 0)
                {
                    sum = sum + i;
                }
            }
        }
        else if (a < b)
        {
            for (i = a + 1; i < b; i++)
            {
                if (i % 2 != 0)
                {
                    sum = sum + i;
                }
            }
        }
        else if (a == b)
            sum = 0;
        printf("%d\n", sum);
        n--;
    }

    return 0;
}