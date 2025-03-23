#include <iostream>
using namespace std;
int main(void)
{
    int n, a[10];
    cin >> n;
    a[0] = n;
    for (int i = 1; i < 10; i++)
    {
        a[i] =a[i-1] * 2;
    }
    cout << "N[0] = " << a[0] << endl;
    for (int i = 1; i < 10; i++)
    {
        cout << "N[" << i << "] = " << a[i] << endl;
    }
    return 0;
}