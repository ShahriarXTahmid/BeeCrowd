#include <iostream>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        if (n == EOF)
        {
            break;
        }
        int a[n][n];
        int k = n - 1;
        for (int i = 0; i < n; i++)
        {
            k = n - 1 - i;
            for (int j = 0; j < n; j++)
            {
                if (j == k)
                {
                    a[i][j] = 2;
                }
                else if (i == j)
                {
                    a[i][j] = 1;
                }
                else
                {
                    a[i][j] = 3;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << a[i][j];
            }
            cout << endl;
        }
    }

    return 0;
}