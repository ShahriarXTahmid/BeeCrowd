#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> RPM(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> RPM[i];
    }

    int result = 0;
    for (int i = 1; i < N; ++i)
    {
        if (RPM[i] < RPM[i - 1])
        {
            result = i + 1;
            break;
        }
    }

    cout << result << endl;
    return 0;
}