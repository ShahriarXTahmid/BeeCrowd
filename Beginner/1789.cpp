#include <iostream>
using namespace std;
int main()
{
    while (1)
    {
        int l;
        if (!(cin >> l))
        {
            exit(0);
        }
        int a[l];
        for (int i = 0; i < l; i++)
        {
            cin >> a[i];
        }
        int max = a[0];
        for (int i = 1; i < l; i++)
        {
            if (max < a[i])
            {
                max = a[i];
            }
        }
        if (max < 10)
        {
            cout << "1" << endl;
        }
        else if (max >= 10 && max < 20)
        {
            cout << "2" << endl;
        }
        else if (max >= 20)
        {
            cout << "3" << endl;
        }
    }

    return 0;
}