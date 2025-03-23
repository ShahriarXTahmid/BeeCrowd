#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a, count = 0, sum = 0;
    while (1)
    {
        cin >> a;
        if (a < 0)
        {
            break;
        }
        sum = sum + a;
        count++;
       
    }
    cout << fixed << setprecision(2) << (float)(sum) / count << endl;

    return 0;
}