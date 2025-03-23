#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d^2 = %.0lf\n", i, pow(i, 2));
        }
    }
    return 0;
}