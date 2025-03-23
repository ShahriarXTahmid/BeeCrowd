#include <iostream>
using namespace std;
int main()
{
    int a, b, count = 0, sum = 0;
    cin >> a >> b;
    while (1)
    {
        if (b <= a)
        {
            cin >> b;
        }
        else
        {
            break;
        }
    }
    for (int i = a; i <= b; i++)
    {
        sum += i;
        count++;
        if (sum >= b)
        {
            break;
        }
    }
    cout << count << endl;

    return 0;
}