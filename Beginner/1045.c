#include <stdio.h>
int main()
{
    double a, b, c, max;
    scanf("%lf %lf %lf", &a, &b, &c);
    double ary[] = {a, b, c};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3 - 1; j++)
        {
            if (ary[j] < ary[j + 1])
            {
                int temp = ary[j];
                ary[j] = ary[j + 1];
                ary[j + 1] = temp;
            }
        }
    }
    if (ary[0] >= (ary[1] + ary[2]))
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else if ((ary[0] * ary[0]) == (ary[1] * ary[1]) + (ary[2] * ary[2]))
    {
        printf("TRIANGULO RETANGULO\n");
    }
    else if ((ary[0] * ary[0]) > (ary[1] * ary[1]) + (ary[2] * ary[2]))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if ((ary[0] * ary[0]) < (ary[1] * ary[1]) + (ary[2] * ary[2]))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if (ary[0] == ary[1] && ary[1] == ary[2] && ary[2] == ary[1])
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    else if (ary[0] == ary[1] || ary[1] == ary[2] || ary[2] == ary[1])
    {
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}