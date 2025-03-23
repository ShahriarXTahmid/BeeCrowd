#include <iostream>
using namespace std;
long long fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * fact(n - 1);
}
int main()
{
    int a;
    cin >> a;
    cout << fact(a) << endl;

    return 0;
}