#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double V, D;
    while (cin >> V >> D)
    {
        double R = D / 2.0;
        double area = 3.14 * R * R;
        double altura = V / area;

        cout << fixed << setprecision(2);
        cout << "ALTURA = " << altura << endl;
        cout << "AREA = " << area << endl;
    }
    return 0;
}