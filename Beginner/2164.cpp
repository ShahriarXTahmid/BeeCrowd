#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double fibonacci(int n)
{
    const double sqrt5 = sqrt(5);
    const double phi = (1 + sqrt5) / 2;
    const double psi = (1 - sqrt5) / 2;

    double fib = (pow(phi, n) - pow(psi, n)) / sqrt5;
    return fib;
}

int main()
{
    int n;
    cin >> n;

    double result = fibonacci(n);
    cout << fixed << setprecision(1) << result << endl;

    return 0;
}