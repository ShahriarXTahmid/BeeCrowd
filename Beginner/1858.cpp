#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> T(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> T[i];
    }

    int min_hits = INT_MAX;
    int best_person = 0;

    for (int i = 0; i < N; ++i)
    {
        if (T[i] < min_hits)
        {
            min_hits = T[i];
            best_person = i + 1;
        }
    }

    cout << best_person << endl;

    return 0;
}