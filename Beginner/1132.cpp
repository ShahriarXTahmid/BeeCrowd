#include <iostream>
using namespace std;
int main()
{
    long long int x, y, sum = 0;
    cin >> x >> y;
    if (x > y)
    {
        x = x ^ y;
        y = x ^ y;
        x = x ^ y;
    }
    for (long long int i = x; i <= y; i++)
    {
        if (i % 13 != 0)
        {
            sum += i;
        }
    }
    cout << sum << endl;

    return 0;
}