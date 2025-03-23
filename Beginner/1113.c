#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x, y;
    while (1)
    {
        scanf("%d %d", &x, &y);
        if (x == y)
        {
            exit(0);
        }
        else if (x > y)
        {
            printf("Decrescente\n");
        }
        else if (x < y)
        {
            printf("Crescente\n");
        }
    }
    return 0;
}