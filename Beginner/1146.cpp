#include <iostream>
using namespace std;
int main()
{
    int x;
    while (1)
    {
        cin >> x;
        for (int i = 1; i <= x; i++)
        {

            cout << i;
            if (i < x)
            {
                cout << " ";
            };
        }

        if (x == 0)
        {
            exit(0);
        }
        cout << endl;
    }
    return 0;
}