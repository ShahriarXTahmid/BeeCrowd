#include <stdio.h>
int main()
{
    int n;
    float avg;
    scanf("%d", &n);
    float a, b, c;
    for (int i = 1; i <= n; i++)
    {
        scanf("%f %f %f", &a, &b, &c);
        avg = (float)((a * 2) + (b * 3) + (c * 5)) / 10;
        printf("%.1f\n", avg);
    }
    
    return 0;
}