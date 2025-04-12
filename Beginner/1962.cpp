#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        int t;
        cin >> t;
        int year = 2015 - t;

        if (year <= 0)
        {
            cout << abs(year) + 1 << " A.C." << endl;
        }
        else
        {
            cout << year << " D.C." << endl;
        }
    }

    return 0;
}