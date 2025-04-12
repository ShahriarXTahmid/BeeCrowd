#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    int *sheep = new int[N];
    bool *attacked = new bool[N];
    memset(attacked, false, N * sizeof(bool));

    for (int i = 0; i < N; ++i)
    {
        cin >> sheep[i];
    }

    int current = 0;
    int attacked_count = 0;
    long long total_sheep = 0;

    while (current >= 0 && current < N)
    {
        if (!attacked[current])
        {
            attacked[current] = true;
            attacked_count++;
        }

        int sheep_count = sheep[current];
        if (sheep_count > 0)
        {
            sheep[current]--;
        }

        if (sheep_count % 2 == 1)
        {
            current++;
        }
        else
        {
            current--;
        }
    }

    for (int i = 0; i < N; ++i)
    {
        total_sheep += sheep[i];
    }

    cout << attacked_count << " " << total_sheep << endl;

    delete[] sheep;
    delete[] attacked;

    return 0;
}