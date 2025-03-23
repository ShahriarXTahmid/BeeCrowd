#include <stdio.h>
int main()
{
    double a, b, c, d, e;
    double avg;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

    avg = ((a * 2) + (b * 3) + (c * 4) + (d * 1)) / 10;
    printf("Media: %.1lf\n", avg);

    if (avg >= 7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if (avg >= 5.0 && avg <= 6.9)
    {
        printf("Aluno em exame.\n");
        scanf("%lf", &e);
        printf("Nota do exame: %.1lf\n", e);
        printf("Aluno aprovado.\n");
        printf("Media final: %.1lf\n", (e + avg) / 2);
    }
    else if (avg < 5.0)
    {
        printf("Aluno reprovado.\n");
    }

    return 0;
}