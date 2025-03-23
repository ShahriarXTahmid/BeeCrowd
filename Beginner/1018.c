#include <stdio.h>
int main()
{
    long long int amnt;
    long long int a, b, c, d, e, f, g;
    scanf("%lld", &amnt);
    printf("%lld\n", amnt);
    a = amnt / 100;
    amnt = amnt % 100;
    b = amnt / 50;
    amnt = amnt % 50;
    c = amnt / 20;
    amnt = amnt % 20;
    d = amnt / 10;
    amnt = amnt % 10;
    e = amnt / 5;
    amnt = amnt % 5;
    f = amnt / 2;
    amnt = amnt % 2;
    g = amnt / 1;
    printf("%lld nota(s) de R$ 100,00\n", a);
    printf("%lld nota(s) de R$ 50,00\n", b);
    printf("%lld nota(s) de R$ 20,00\n", c);
    printf("%lld nota(s) de R$ 10,00\n", d);
    printf("%lld nota(s) de R$ 5,00\n", e);
    printf("%lld nota(s) de R$ 2,00\n", f);
    printf("%lld nota(s) de R$ 1,00\n", g);

    return 0;
}