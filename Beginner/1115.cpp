#include <iostream>
using namespace std;
int main()
{
    int x, y;
    while (1)
    {
        cin >> x >> y;
        if (x > 0 && y > 0)
        {
            cout << "primeiro" << endl;
        }
        else if (x > 0 && y < 0)
        {
            cout << "quarto" << endl;
        }
        else if (x < 0 && y < 0)
        {
            cout << "terceiro" << endl;
        }
        else if (x < 0 && y > 0)
        {
            cout << "segundo" << endl;
        }
        else if (x == 0 || y == 0)
        {
            exit(0);
        }
    }
    return 0;
}