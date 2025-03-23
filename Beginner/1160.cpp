#include <iostream>
using namespace std;
int main()
{
    int t, pa, pb;
    double g1, g2;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int count = 0;
        cin >> pa >> pb >> g1 >> g2;
        while (pa <= pb)
        {
            pa = pa + ((pa * g1) / 100);
            pb = pb + ((pb * g2) / 100);
            count++;
            if (count > 100)
            {
                cout << "Mais de 1 seculo." << endl;
                break;
            }
        }
        if (count <= 100)
        {
            cout << count << " anos." << endl;
        }
    }
    return 0;
}