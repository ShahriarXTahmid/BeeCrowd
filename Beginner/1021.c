#include <stdio.h>
int main()
{
    double amnt;
    int a, b, c, d, e, f, g;
    int v, w, x, y, z;
    scanf("%lf", &amnt);
    int n = (int)amnt, m;

    a = n / 100;
    n = (int)n % 100;
    b = n / 50;
    n = (int)n % 50;
    c = n / 20;
    n = (int)n % 20;
    d = n / 10;
    n = (int)n % 10;
    e = n / 5;
    n = (int)n % 5;
    f = n / 2;
    n = (int)n % 2;
    g = n / 1;

    amnt = amnt - (int)amnt;
    m = amnt * 100;

    v = m / 50;
    m = m % 50;
    w = m / 25;
    m = m % 25;
    x = m / 10;
    m = m % 10;
    y = m / 5;
    m = m % 5;
    z = m / 1;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", a);
    printf("%d nota(s) de R$ 50.00\n", b);
    printf("%d nota(s) de R$ 20.00\n", c);
    printf("%d nota(s) de R$ 10.00\n", d);
    printf("%d nota(s) de R$ 5.00\n", e);
    printf("%d nota(s) de R$ 2.00\n", f);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", g);
    printf("%d moeda(s) de R$ 0.50\n", v);
    printf("%d moeda(s) de R$ 0.25\n", w);
    printf("%d moeda(s) de R$ 0.10\n", x);
    printf("%d moeda(s) de R$ 0.05\n", y);
    printf("%d moeda(s) de R$ 0.01\n", z);

    return 0;
}