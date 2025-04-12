#include <iostream>
#include <iomanip>
#include <map>
using namespace std;
int main()
{
    map<int, double> menu = {
        {1001, 1.50},
        {1002, 2.50},
        {1003, 3.50},
        {1004, 4.50},
        {1005, 5.50}};

    int p;
    cin >> p;

    double total = 0.0;

    for (int i = 0; i < p; ++i)
    {
        int product, quantity;
        cin >> product >> quantity;
        total += menu[product] * quantity;
    }

    cout << fixed << setprecision(2) << total << endl;

    return 0;
}