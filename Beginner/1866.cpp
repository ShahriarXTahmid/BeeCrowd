#include <iostream>
using namespace std;
int main()
{
    int t, n, sum;
    cin >> t;
    while (t--)
    {
        cin >> n;
        sum = (n % 2 != 0) ? 1 : 0;
        cout << sum << endl;
    }

    return 0;
}