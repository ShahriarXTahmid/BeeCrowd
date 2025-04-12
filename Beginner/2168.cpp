#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<vector<int>> grid(N + 1, vector<int>(N + 1));

    for (int i = 0; i <= N; ++i)
    {
        for (int j = 0; j <= N; ++j)
        {
            cin >> grid[i][j];
        }
    }

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            int cameras = 0;
            cameras += grid[i][j];
            cameras += grid[i][j + 1];
            cameras += grid[i + 1][j];
            cameras += grid[i + 1][j + 1];

            if (cameras >= 2)
            {
                cout << 'S';
            }
            else
            {
                cout << 'U';
            }
        }
        cout << endl;
    }

    return 0;
}