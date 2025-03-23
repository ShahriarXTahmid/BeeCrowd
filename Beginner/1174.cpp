#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
    double a, n[100];
    for (int i = 0; i < 100; i++)
    {
        cin >> n[i];
    }
    for (int i = 0; i < 100; i++)
    {
        if (n[i] <= 10)
        {
            cout << fixed << setprecision(1) << "A[" << i << "] = " << n[i] << endl;
        }
    }

    return 0;
}