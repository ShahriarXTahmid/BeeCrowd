#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float sum = 0;
    float numer = 1, denom = 1;
    while (numer <= 39)
    {
        sum += (float)numer / denom;
        numer += 2;
        denom *= 2;
    }
    cout << fixed << setprecision(2) << sum << endl;
    return 0;
}