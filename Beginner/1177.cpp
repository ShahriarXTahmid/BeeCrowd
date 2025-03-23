#include <iostream>
using namespace std;
int main()
{
    int j = 0, t, n[1000];
    cin >> t;
    for (int i = 0; i < 1000; i++)
    {

        n[i] = j;
        cout << "N[" << i << "] = " << j << endl;
        j++;
        if (j > (t - 1))
        {
            j = 0;
        }
    }

    return 0;
}