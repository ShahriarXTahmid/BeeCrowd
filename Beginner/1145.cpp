#include <iostream>
using namespace std;
int main()
{
    long long int x, y;
    cin >> x >> y;
    if (x > y)
    {
        x = x ^ y;
        y = x ^ y;
        x = x ^ y;
    }
    for (int i = 1; i <= y; i++)
    {
        cout << i << " ";
        if (i % x == 0)
        {
            cout << endl;
        }
    }
    return 0;
}