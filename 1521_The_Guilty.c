#include <stdio.h>

int main()
{
    int n, x, k;

    while (scanf("%d", &n) && n)
    {
        int c[n + 1];

        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &x);
            c[i + 1] = x;
        }
        scanf("%d", &k);

        while (c[k] != k)
            k = c[k];

        printf("%d\n", k);
    }
    return 0;
}
