#include <iostream>
#include <iomanip>
using namespace std;
double sumavg(double array[][12], int num, char ch)
{
    double summation = 0;
    double average = 0;
    switch (ch)
    {
    case 'S':
    {
        for (int a = 0; a < 12; a++)
        {
            summation += array[a][num];
        }
        return summation;
    }
    case 'M':
    {
        for (int a = 0; a < 12; a++)
        {
            summation += array[a][num];
        }
        average = (double)summation / 12;
        return average;
    }
        default:
        {
            return 0;
        }
    }
}
int main()
{
    int l, i, j;
    char t;
    cin >> l >> t;
    double m[12][12], result;
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            cin >> m[j][i];
        }
    }
    result = sumavg(m, l, t);
    cout << fixed << setprecision(1) << result << endl;
    return 0;
}