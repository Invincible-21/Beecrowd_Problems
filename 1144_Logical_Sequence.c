#include <stdio.h>
int main()
{
    int n, a, b, c, d, e;
    scanf("%d", &n);
    for (a = 1; a <= n; a++)
    {
        b = a * a;
        c = a * a * a;
        printf("%d %d %d\n", a, b, c);
        d = b + 1;
        e = c + 1;
        printf("%d %d %d\n", a, d, e);
    }
    return 0;
}