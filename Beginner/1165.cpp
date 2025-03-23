#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int n, a;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int count = 0;
        cin >> a;
        for (int j = 2; j <= sqrt(a); j++)
        {
            if (a % j == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {
            cout << a << " eh primo" << endl;
        }
        else
        {
            cout << a << " nao eh primo" << endl;
        }
    }

    return 0;
}