#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;

    int count2 = 0, count3 = 0, count4 = 0, count5 = 0;

    for (int i = 0; i < N; ++i)
    {
        int num;
        cin >> num;

        if (num % 2 == 0)
            count2++;
        if (num % 3 == 0)
            count3++;
        if (num % 4 == 0)
            count4++;
        if (num % 5 == 0)
            count5++;
    }

    cout << count2 << " Multiplo(s) de 2" << endl;
    cout << count3 << " Multiplo(s) de 3" << endl;
    cout << count4 << " Multiplo(s) de 4" << endl;
    cout << count5 << " Multiplo(s) de 5" << endl;

    return 0;
}