#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    cin >> n;
    int x[n];
    for (i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    int min = x[0], pos = 0;
    for (j = 0; j < n; j++)
    {
        if (min > x[j])
        {
            min = x[j];
            pos = j;
        }
    }
    cout << "Menor valor: " << min << endl;
    cout << "Posicao: " << pos << endl;
    return 0;
}