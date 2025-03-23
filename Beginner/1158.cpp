#include <iostream>
using namespace std;
int main()
{
    int n, x, y;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        cin >> x >> y;
        for (int j = x, k = 0; k < y; j++)
        {
            if (j % 2 != 0)
            {
                sum += j;
                k++;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
