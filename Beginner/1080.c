#include <stdio.h>
int main()
{
    int ary[100], i, pos = 0;
    scanf("%d", &ary[0]);
    int max = ary[0];
    for (i = 1; i < 100; i++)
    {
        scanf("%d", &ary[i]);
        if (max < ary[i])
        {
            max = ary[i];
            pos = i;
        }
    }
    printf("%d\n", max);
    printf("%d\n", pos+1);

    return 0;
}