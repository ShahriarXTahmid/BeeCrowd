#include <iostream>
#include <string>
#include <bitset>
using namespace std;
int main()
{
    int results[3] = {0, 0, 0};
    int currentResult = 0;
    int screamCount = 0;

    string line;
    while (screamCount < 3 && getline(cin, line))
    {
        if (line == "caw caw")
        {
            results[screamCount] = currentResult;
            currentResult = 0;
            screamCount++;
        }
        else
        {
            bitset<3> bits;
            for (int i = 0; i < 3; i++)
            {
                if (line[i] == '*')
                {
                    bits.set(2 - i);
                }
            }
            currentResult += bits.to_ulong();
        }
    }

    for (int i = 0; i < 3; i++)
    {
        cout << results[i] << endl;
    }

    return 0;
}