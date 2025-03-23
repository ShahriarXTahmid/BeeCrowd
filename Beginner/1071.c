#include <stdio.h>
int main()
{
    int a, b, sum = 0;
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;
    }
    for (int i = a + 1; i <= b - 1; i++)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
        }
    }
    printf("%d\n", sum);
    return 0;
}