#include <iostream>
using namespace std;
int main(void)
{
    long long int n, first = 0, second = 1, fibo;
    cin >> n;
    for (long long int i = 0; i < n; i++)
    {
        if (i == 0 || i == 1)
        {
            cout << i;
            if (i == 0)
            {
                cout << " ";
            }
        }
        else
        {
            fibo = first + second;
            first = second;
            second = fibo;
            cout << " " << fibo;
        }
    }
    cout << endl;
    return 0;
}