#include <stdio.h>
double average(double ary[10])
{
    double sum = 0, avg;
    int count = 0;
    for (int i = 0; i < 6; i++)
    {
        if (ary[i] >= 0)
        {
            sum = sum + ary[i];
            count++;
        }
    }
    avg = sum / count;
    return avg;
}
int main()
{
    double a[10], result;
    int count = 0;
    for (int i = 0; i < 6; i++)
    {
        scanf("%lf", &a[i]);
        if (a[i] > 0)
        {
            count++;
        }
    }
    printf("%d valores positivos\n", count);
    result = average(a);
    printf("%.1lf\n", result);

    return 0;
}