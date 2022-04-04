#include <stdio.h>

int main()
{
    float a, b, c, d;
    scanf("%f %f %f %f", &a, &b, &c, &d);

    float x = (a * 2 + b * 3 + c * 4 + d * 1) / 10;
    printf("Media: %.1f\n", x);

    if (x >= 7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if (x < 5)
    {
        printf("Aluno reprovado.\n");
    }
    else if (x >= 5.0 && x <= 6.9)
    {
        printf("Aluno em exame.\n");
        float y;
        scanf("%f", &y);
        printf("Nota do exame: %.1f\n", y);
        float z = (x + y) / 2;
        if (z >= 5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else if (z <= 4.9)
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", z);
    }

    return 0;
}