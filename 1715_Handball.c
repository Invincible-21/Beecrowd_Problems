#include <stdio.h>

#define FOR(i, n) for (int i = 0; i < (n); ++i)

int main()
{
    int n, m, tmp, res, v;

    while (scanf("%d %d", &n, &m) == 2)
    {
        res = 0;
        FOR(i, n)
        {
            tmp = 0;
            FOR(j, m)
            {
                scanf("%d", &v);
                if (v > 0)
                    tmp++;
            }

            if (tmp == m)
                res++;
        }

        printf("%d\n", res);
    }

    return 0;
}