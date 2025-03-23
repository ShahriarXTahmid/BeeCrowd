#include <stdio.h>
int main()
{
    int n, x, y, sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d %d", &x, &y);
        if (x > y)
        {
            x = x ^ y;
            y = x ^ y;
            x = x ^ y;
        }
        for (int j = x + 1; j <= y - 1; j++)
        {
            if (j % 2 != 0)
            {
                sum = sum + j;
            }
        }
        printf("%d\n", sum);
        sum = 0;
    }

    return 0;
}