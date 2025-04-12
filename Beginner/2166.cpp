#include <iostream>
#include <iomanip>
using namespace std;
double sqrt2_continued_fraction(int N)
{
    double result = 2.0;
    for (int i = 1; i < N; ++i)
    {
        result = 2.0 + 1.0 / result;
    }
    if (N == 0)
    {
        return 1.0;
    }
    else
    {
        return 1.0 + 1.0 / result;
    }
}

int main()
{
    int N;
    cin >> N;
    double sqrt2 = sqrt2_continued_fraction(N);
    cout << fixed << setprecision(10) << sqrt2 << endl;
    return 0;
}