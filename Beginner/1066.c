#include <stdio.h>
int main()
{
    int a[10], count_e, count_o, count_p, count_n;
    count_e = 0;
    count_o = 0;
    count_p = 0;
    count_n = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0)
        {
            count_e++;
        }
        if (a[i] % 2 != 0)
        {
            count_o++;
        }
        if (a[i] > 0)
        {
            count_p++;
        }
        if (a[i] < 0)
        {
            count_n++;
        }
    }

    printf("%d valor(es) par(es)\n", count_e);
    printf("%d valor(es) impar(es)\n", count_o);
    printf("%d valor(es) positivo(s)\n", count_p);
    printf("%d valor(es) negativo(s)\n", count_n);
    return 0;
}