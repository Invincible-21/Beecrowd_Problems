#include <stdio.h>

int main()
{

    int a, b;
    scanf("%d %d", &a, &b);
    int sum = 0;
    if (a > b)
    {
        for (int i = a - 1; i > b; i--)
        {
            if (i % 2 != 0)
            {
                sum = sum + i;
            }
        }
    }
    else if (a < b)
    {
        for (int i = a + 1; i < b; i++)
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

    return 0;
}