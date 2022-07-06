#include <stdio.h>
int main()
{
    long long int m, n, fact1, fact2;
    int i;

    while (scanf("%lld %lld", &m, &n) != EOF)
    {
        fact1 = 1;
        fact2 = 1;
        for (i = m; i > 0; --i)
        {
            fact1 *= m;
            m--;
        }

        for (i = n; i > 0; --i)
        {
            fact2 *= n;
            n--;
        }

        printf("%lld\n", fact1 + fact2);
    }

    return 0;
}