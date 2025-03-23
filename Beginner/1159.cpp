#include <iostream>
using namespace std;
int main()
{
    int x;
    while (1)
    {
        int sum = 0;
        cin >> x;
        if (x == 0)
        {
            exit(0);
        }
        else if (x % 2 == 0)
        {
            for (int i = x, k = 0; k < 5; i++)
            {
                if (i % 2 == 0)
                {
                    sum += i;
                    k++;
                }
            }
        }
        else
        {
            for (int j = x + 1, k = 0; k < 5; j++)
            {
                if (j % 2 == 0)
                {
                    sum += j;
                    k++;
                }
            }
        }
        cout << sum << endl;
        sum = 0;
    }
    return 0;
}