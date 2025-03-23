#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double x, j = 1, n[100];
    cin >> x;
    for (int i = 0; i < 100; i++)
    {
        n[i] = x;
    }
    for (int i = 0; i < 100; i++)
    {
        n[i] = n[i] / j;
        cout << fixed << setprecision(4) << "N[" << i << "] = " << n[i] << endl;
        j = j * 2;
    }
    return 0;
}