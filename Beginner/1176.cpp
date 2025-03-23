#include <iostream>
using namespace std;
int main()
{
    int n, b;
    long long int a[100];
    a[0] = 0;
    a[1] = 1;
    for (int i = 2; i < 100; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
    }
    cin >> n;
    while (n--)
    {
        cin >> b;
        cout << "Fib(" << b << ") = " << a[b] << endl;
    }
    return 0;
}