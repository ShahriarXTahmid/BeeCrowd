#include <iostream>
using namespace std;

int main()
{
    int i, n[15], par = 0, impar = 0;
    int ary1[5], ary2[5];

    for (i = 0; i < 15; i++)
    {
        cin >> n[i];
    }

    for (i = 0; i < 15; i++)
    {
        if (n[i] % 2 == 0)
        {
            ary1[par] = n[i];
            par++;
            if (par == 5)
            {
                for (int a = 0; a < 5; a++)
                {
                    cout << "par[" << a << "] = " << ary1[a] << endl;
                }
                par = 0;
            }
        }
        else
        {
            ary2[impar] = n[i];
            impar++;
            if (impar == 5)
            {
                for (int a = 0; a < 5; a++)
                {
                    cout << "impar[" << a << "] = " << ary2[a] << endl;
                }
                impar = 0;
            }
        }
    }
    for (int a = 0; a < impar; a++)
    {
        cout << "impar[" << a << "] = " << ary2[a] << endl;
    }
    for (int a = 0; a < par; a++)
    {
        cout << "par[" << a << "] = " << ary1[a] << endl;
    }
    return 0;
}