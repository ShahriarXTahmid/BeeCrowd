#include <iostream>
using namespace std;
int main()
{
    int n, a, sum;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum = 0;
        cin >> a;
        for (int j = 1; j < a; j++)
        {
            if (a % j == 0)
            {
                sum += j;
            }
        }
        if (sum == a)
        {
            cout << a << " eh perfeito" << endl;
        }
        else
        {
            cout << a << " nao eh perfeito" << endl;
        }
    }
    return 0;
}