#include <stdio.h>

int main()
{
    char name[20];
    double salary, products_sell;
    scanf("%s %lf %lf", &name, &salary, &products_sell);

    double bonus = (salary + (products_sell * 15 / 100));
    printf("TOTAL = R$ %.2lf\n", bonus);
    return 0;
}