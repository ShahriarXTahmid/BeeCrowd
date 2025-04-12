#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int best_reg = 0;
    float best_note = -1.0;

    for (int i = 0; i < n; ++i)
    {
        int reg;
        float note;
        cin >> reg >> note;

        if (note > best_note)
        {
            best_note = note;
            best_reg = reg;
        }
    }

    if (best_note >= 8.0)
    {
        cout << best_reg << endl;
    }
    else
    {
        cout << "Minimum note not reached" << endl;
    }

    return 0;
}