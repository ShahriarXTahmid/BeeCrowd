#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> H(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> H[i];
    }

    if (N == 1)
    {
        cout << 1 << endl;
        return 0;
    }

    int prev_type = 0;
    bool valid = true;

    for (int i = 1; i < N; ++i)
    {
        if (H[i] > H[i - 1])
        {
            if (prev_type == 1)
            {
                valid = false;
                break;
            }
            prev_type = 1;
        }
        else if (H[i] < H[i - 1])
        {
            if (prev_type == -1)
            {
                valid = false;
                break;
            }
            prev_type = -1;
        }
        else
        {
            valid = false;
            break;
        }
    }

    cout << (valid ? 1 : 0) << endl;

    return 0;
}