#include <stdio.h>
int main()
{
    long long int n, h, m;
    scanf("%lld", &n);
    h = n / 3600;
    m = (n % 3600) / 60;
    n = n - ((h * 3600) + (m * 60));
    printf("%lld:%lld:%lld\n", h, m, n);

    return 0;
}