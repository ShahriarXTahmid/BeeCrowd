#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int j = 0, i;
    float a[2], n, avg;
    while (1)
    {
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
        j = 0;
        while (1)
        {
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> i;
            if (i == 1 || i == 2)
            {
                break;
            }
        }
        if (i == 1)
        {
            continue;
        }
        else
        {
            break;
        }
    }

    return 0;
}