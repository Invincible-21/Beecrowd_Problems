#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int MaiorAB = (a + b + abs(a - b)) / 2;
    int MaiorAB2 = (MaiorAB + c + abs(MaiorAB - c)) / 2;

    printf("%d eh o maior\n", MaiorAB2);

    return 0;
}