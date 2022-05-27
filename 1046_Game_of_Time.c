#include <stdio.h>

int main()
{
    int startTim, endTim, durTim;
    scanf("%d %d", &startTim, &endTim);

    durTim = endTim - startTim;

    if (durTim < 0)
    {
        durTim = 24 + (endTim - startTim);
    }
    if (startTim == endTim)
    {

        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else
        printf("O JOGO DUROU %d HORA(S)\n", durTim);

    return 0;
}