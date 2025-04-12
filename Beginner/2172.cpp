#include <iostream>
using namespace std;
int main()
{
    double X, M;
    while (true)
    {
        cin >> X >> M;
        if (X == 0 && M == 0)
        {
            break;
        }
        double E = X * M;

        cout << (long long)E << endl;
    }
    return 0;
}