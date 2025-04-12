#include <iostream>
#include <iomanip>
using namespace std;
double sumavg(double array[][12], char ch)
{
    int count = 0;
    double summation = 0;
    double average = 0;
    switch (ch)
    {
    case 'S':
    {
        for (int a = 1; a < 12; a++)
        {
            for (int b = 0; b < a; b++)
            {
                summation += array[a][b];
            }
        }
        return summation;
    }
    case 'M':
    {
        for (int a = 1; a < 12; a++)
        {
            for (int b = 0; b < a; b++)
            {
                summation += array[a][b];
                count++;
            }
        }
        average = (double)summation / count;
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
    int i, j;
    char t;
    cin >> t;
    double m[12][12], result;
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            cin >> m[i][j];
        }
    }
    result = sumavg(m, t);
    cout << fixed << setprecision(1) << result << endl;
    return 0;
}