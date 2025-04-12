#include <iostream>
#include <string>
using namespace std;
int main()
{
    string S;
    cin >> S;
    int count_ones = 0;
    for (char c : S)
    {
        if (c == '1')
        {
            count_ones++;
        }
    }
    char B = (count_ones % 2 == 0) ? '0' : '1';
    cout << S + B << endl;
    return 0;
}