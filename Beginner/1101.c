#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m, n, sum = 0;

    while (1)
    {
        scanf("%d %d", &m, &n);
        if (m <= 0 || n <= 0)
        {
            exit(0);
        }
        else if (m > n)
        {
            m = m ^ n;
            n = m ^ n;
            m = m ^ n;
        }
        for (int i = m; i <= n; i++)
        {
            sum = sum + i;
            printf("%d ", i);
        }
        printf("Sum=%d\n", sum);
    }
    return 0;
}