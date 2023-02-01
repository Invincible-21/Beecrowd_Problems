#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int i, j;
    for (i = 1; i <= n; i++)
    {
        printf("%d %d %d\n", i, i * i, i * i * i);
    }

    return 0;
}