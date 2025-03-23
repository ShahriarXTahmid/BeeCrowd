#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int j = 0;
    float a[2], avg, n;
    while (j < 2)
    {
        cin >> n;
        if (n >= 0 && n <= 10)
        {
            a[j] = n;
            j++;
        }
        else
        {
            cout << "nota invalida" << endl;
        }
    }
    avg = (a[0] + a[1]) / (float)2;
    cout << fixed << setprecision(2) << "media = " << avg << endl;
    return 0;
}