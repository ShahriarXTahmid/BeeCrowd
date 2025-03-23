#include <stdio.h>
int main()
{
    int p;
    float a, b, salary;
    char ch = '%';
    scanf("%f", &a);

    if (a >= 0.00 && a <= 400.00)
    {
        b = a * 0.15;
        salary = a + b;
        p = 15;
    }
    else if (a >= 400.01 && a <= 800.00)
    {
        b = a * 0.12;
        salary = a + b;
        p = 12;
    }
    else if (a >= 800.01 && a <= 1200.00)
    {
        b = a * 0.10;
        salary = a + b;
        p = 10;
    }
    else if (a >= 1200.01 && a <= 2000.00)
    {
        b = a * 0.07;
        salary = a + b;
        p = 7;
    }
    else if (a > 2000.00)
    {
        b = a * 0.04;
        salary = a + b;
        p = 4;
    }

    printf("Novo salario: %.2f\n", salary);
    printf("Reajuste ganho: %.2f\n", b);
    printf("Em percentual: %d %c\n", p, ch);

    return 0;
}