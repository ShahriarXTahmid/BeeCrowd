#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double a, b;
    cin >> a >> b;

    double increase = ((b - a) / a) * 100;

    cout << fixed << setprecision(2) << increase << "%" << endl;

    return 0;
}