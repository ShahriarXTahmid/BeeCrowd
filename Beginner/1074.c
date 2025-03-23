#include <stdio.h>
int main()
{
    int n, a;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        if (a == 0)
        {
            printf("NULL\n");
        }
        else if (a > 0 && a % 2 == 0)
        {
            printf("EVEN POSITIVE\n");
        }
        else if (a < 0 && a % 2 == 0)
        {
            printf("EVEN NEGATIVE\n");
        }
        if (a > 0 && a % 2 != 0)
        {
            printf("ODD POSITIVE\n");
        }
        if (a < 0 && a % 2 != 0)
        {
            printf("ODD NEGATIVE\n");
        }
    }

    return 0;
}