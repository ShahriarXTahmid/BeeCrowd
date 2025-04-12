#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int N;
    cin >> N;

    while (N--)
    {
        int H, M, O;
        cin >> H >> M >> O;

        cout << setfill('0') << setw(2) << H << ":"
             << setfill('0') << setw(2) << M << " - ";

        if (O == 1)
        {
            cout << "A porta abriu!" << endl;
        }
        else
        {
            cout << "A porta fechou!" << endl;
        }
    }

    return 0;
}