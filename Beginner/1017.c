#include <stdio.h>
int main()
{
    double x, y, fuel ;
    scanf("%lf %lf", &x, &y);
    fuel = (x * y) / 12;
    printf("%.3lf\n", fuel);
    return 0;
}