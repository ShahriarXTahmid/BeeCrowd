#include <stdio.h>
int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    int a[3] = {x, y, z};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3 - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", a[0], a[1], a[2], x, y, z);
    return 0;
}