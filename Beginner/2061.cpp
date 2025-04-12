#include <iostream>
#include <string>
using namespace std;
int main()
{
    int N, M;
    cin >> N >> M;

    int tabs = N;

    for (int i = 0; i < M; ++i)
    {
        string action;
        cin >> action;

        if (action == "fechou")
        {
            tabs += 1;
        }
        else if (action == "clicou")
        {
            tabs -= 1;
        }
    }

    cout << tabs << endl;

    return 0;
}