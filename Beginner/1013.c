#include <stdio.h>
#include <math.h>
int max(int num1, int num2, int num3)
{
    return ((((num1 + num2) + abs(num1 - num2)) / 2) + num3 + abs(((num1 + num2) + abs(num1 - num2)) / 2 - num3)) / 2;
}
int main()
{
    int a, b, c;
    int result;
    scanf("%d %d %d", &a, &b, &c);
    result = max(a, b, c);
    printf("%d eh o maior\n", result);

    return 0;
}