#include <stdio.h>
int main()
{
    int n, c, total = 0;
    int total_c = 0, total_r = 0, total_s = 0;
    char ch, per = '%';
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d %c", &c, &ch);
        if (ch == 'C')
        {
            total_c = total_c + c;
        }
        else if (ch == 'R')
        {
            total_r = total_r + c;
        }
        else if (ch == 'S')
        {
            total_s = total_s + c;
        }
        total = total + c;
    }
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", total_c);
    printf("Total de ratos: %d\n", total_r);
    printf("Total de sapos: %d\n", total_s);

    double per_c, per_r, per_s;
    per_c = (double)(total_c * 100) / total;
    per_r = (double)(total_r * 100) / total;
    per_s = (double)(total_s * 100) / total;

    printf("Percentual de coelhos: %.2lf %c\n", per_c, per);
    printf("Percentual de ratos: %.2lf %c\n", per_r, per);
    printf("Percentual de sapos: %.2lf %c\n", per_s, per);

    return 0;
}