#include <stdio.h>
#include <math.h>
double distance(double x1, double y1, double x2, double y2)
{
    return sqrt((pow(x2 - x1, 2) + (pow(y2 - y1, 2))));
}
int main()
{
    double x1, x2, y1, y2, result;
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    result = distance(x1, y1, x2, y2);
    printf("%.4lf\n", result);

    return 0;
}
